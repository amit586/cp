#include<stdio.h>
#include <limits.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
using namespace std;

// class tour
// {
// public:
// 	vector<int> *tree;
// 	vector<int> et,eh,fo,p,h,A,lg;
// 	vector<vector<int>> st;
// 	int ptr,N;

// 	tour(int n,vector<int> *adj,vector<int> &a){
// 		ptr=0;
// 		N=n;
// 		h = vector<int> (n);
// 		p = vector<int> (n,-1);
// 		fo = vector<int> (n,-1);
// 		tree = adj;
// 		A=a;
// 	}

// 	void debug()
// 	{
// 		int n = ptr;
// 		cout<<"et: ";
// 		for(int i=0;i<n;i++)
// 			cout<<et[i]<<' ';
// 		cout<<"\neh: ";
// 		for(int i=0;i<n;i++)
// 			cout<<eh[i]<<' ';
// 	}

// 	void dfs(int root,int prev,int height)
// 	{

// 		et.pb(root);
// 		eh.pb(height);
// 		p[root]=prev;
// 		h[root]=height;
// 		if(fo[root]==-1)
// 			fo[root]=ptr;
// 		ptr++;
// 		for(auto it:tree[root])
// 			if(it!=prev)
// 				dfs(it,root,height+1),et.pb(it),eh.pb(height),ptr++;
// 	}

// 	void buildSt()
// 	{
// 		lg = vector<int> (ptr+1,0);
// 		st = vector<vector<int>>(ptr+1,vector<int> (21));
// 		int n = ptr;
// 		for(int i=2;i<=ptr;i++)
// 			lg[i]=lg[i/2]+1;
		
// 		for(int i=0;i<n;i++)
// 			st[i][0]=i;
// 		for(int j=1;j<=lg[n]+1;j++)
// 			for(int i=0;i+(1<<j)<=n;i++)
// 				st[i][j] = (eh[st[i][j-1]]<eh[st[i+(1<<(j-1))][j-1]])?st[i][j-1]:st[i+(1<<(j-1))][j-1];
// 	}
// 	int LCA(int u,int v)
// 	{
// 		if(fo[u]>fo[v])
// 			swap(u,v);
// 		int L = fo[u];
// 		int R = fo[v];
// 		int j = lg[R-L+1];
// 		if(eh[st[L][j]]<eh[st[R-(1<<j)+1][j]])
// 			return et[st[L][j]];
// 		else
// 			return et[st[R-(1<<j)+1][j]];
// 	}

// 	int query(int u,int v)
// 	{
// 		vector<int> freq(101,0);
// 		int lca = LCA(u,v);
// 		if(h[u]+h[v]-2*h[lca]>100)
// 			return 0;
// 		int left = u,right=v;
// 		freq[A[lca]]++;
		
// 		while(left!=lca)
// 		{
// 			freq[A[left]]++;
// 			if(freq[A[left]]>=2)
// 				return 0;
// 			left = p[left];
// 		}
// 		while(right!=lca)
// 		{
// 			freq[A[right]]++;
// 			if(freq[A[right]]>=2)
// 				return 0;
// 			right = p[right];
// 		}

// 		int mindiff=INT_MAX,prev1=-1;

// 		for(int i=0;i<=100;i++)
// 		{
// 			if(freq[i]==1 && prev1==-1)
// 				prev1=i;
// 			else if(freq[i]==1 && prev1!=-1)
// 				mindiff = min(mindiff,i-prev1),prev1=i;	
// 		}
// 		return mindiff;
// 	}

// };


class tour
{
public:
	vector<int> *tree;
	vector<int> A,h,p;
	int N ;
	tour(int n,vector<int> *t,vector<int> a)
	{
		N = n;
		tree = t;
		h = vector<int> (n,0);
		p = vector<int> (n,-1);
		A = a;
	}

	void dfs(int root,int parent,int height)
	{
		for(auto it:tree[root])
			if(it!=parent)
				p[it]=root,h[it]=height+1,dfs(it,root,height+1);
	}

	int query(int u,int v)
	{
		if(abs(h[u]-h[v])>100)
			return 0;
		if(h[u]<h[v])
			swap(v,u);

		vector<int> freq(101,0);
		while(h[u]!=h[v])
		{
			freq[A[u]]++;
			if(freq[A[u]]>1)
				return 0;
			u = p[u];
		}

		while(u!=v)
		{
			freq[A[u]]++;
			freq[A[v]]++;
			if(freq[A[u]]>1 || freq[A[v]]>1)
				return 0;
			u = p[u];
			v=p[v];
		}

		freq[A[u]]++;
		if(freq[A[u]]>1)
			return 0;

		int prev=-1;
		int mindiff=INT_MAX;
		for(int i=1;i<=100;i++)
		{
			if(freq[i]==1 && prev==-1)
				prev=i;
			else if(freq[i]==1 && prev!=-1)
				mindiff = min(mindiff,i-prev),prev=i;
		}
		return mindiff;
	}


};

int main(int argc, char const *argv[])
{
	fio
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n,q,u,v;
		cin>>n>>q;
		vector<int> A(n);
		for(int i=0;i<n;i++)	cin>>A[i];
		vector<int> T[n];
		for(int i=0;i<n-1;i++)
		{
			cin>>u>>v;
			T[u-1].pb(v-1);
			T[v-1].pb(u-1);
		}

		tour t(n,T,A);
		t.dfs(0,-1,0);
		//t.buildSt();
		//t.debug();
		while(q--)
		{
			 cin>>u>>v;
			 u--,v--;
			 cout<<t.query(u,v)<<endl;
		}
	}
	return 0;
}
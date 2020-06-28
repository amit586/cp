#include<stdio.h>
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

int searchR(vector<int> &a,int n,int t)
{
	if(t>=a[n-1])
		return n-1;
	int mid,l=0,r=n-1;
	int ans=0;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(a[mid]<=t)
		{
			ans=mid;
			l=mid+1;
		}
		else
			r=mid-1;
		//cout<<l<<" "<<r<<" "<<mid<<endl;
	}
	return ans;
}


int searchL(vector<vector<int>> &st,vector<int> &lg,int R,int d)
{
	int L=R;
	if(R==0)
		return 0;
	int l=0,r=R-1,mid,j;
	while(l<=r)
	{
		mid = (l+r)/2;
		j = lg[r-mid+1];
		if(max(st[mid][j],st[r-(1<<j)+1][j])<=d)
		{
			L = mid;
			r = mid-1;
		}
		else
			l=mid+1;
	}
	return L;
}


int main()
{
	fio
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];

	vector<int> lg(n+1,0),b(n-1,0);
	for(int i=2;i<=n;i++)
		lg[i]=lg[i/2]+1;
	for(int i=0;i<n-1;i++)
		b[i]=a[i+1]-a[i];

	vector<vector<int>> st(n,vector<int> (lg[n]+1,0));
	for(int i=0;i<n-1;i++)
		st[i][0]=b[i];
	for(int j=1;j<=lg[n];j++)
		for(int i=0;i+(1<<j)<=n-1;i++)
			st[i][j] = max(st[i][j-1],st[i+(1<<(j-1))][j-1]);

	int q,t,d,L,R;
	cin>>q;
	while(q--)
	{
		cin>>t>>d;
		R = searchR(a,n,t);
		L = searchL(st,lg,R,d);
		cout<<L+1<<endl;
	}
	return 0;
}

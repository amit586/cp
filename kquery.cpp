#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &a,vector<int>&b)
{
	int l1=a.size(),l2=b.size();
	vector<int> ans(l1+l2);
	int i=0,j=0,k=0;

	while(i<l1&& j<l2)
	{
		if(a[i]<b[j])	
			ans[k]=a[i],i++,k++;
		else
			ans[k]=b[j],j++,k++;
	}
	while(i<l1)
		ans[k]=a[i],i++,k++;
	while(j<l2)
		ans[k]=b[j],j++,k++;
	return ans;
}

vector<int> buildSt(int arr[],int s,int e,vector<int> *st,int i)
{
	if(s==e)
	{
		vector<int> ans(1);
		ans[0]=arr[s];
		st[i]=ans;
		return st[i];
	}

	int mid = (s+e)/2;
	vector<int> ans1 = buildSt(arr,s,mid,st,2*i+1);
	vector<int> ans2 = buildSt(arr,mid+1,e,st,2*i+2);
	st[i]=merge(ans1,ans2);
	return st[i];
}

int query(vector<int> *st,int s,int e,int i,int qs,int qe,int k)
{
	if(s>qe || e<qs)
		return 0;
	if(qs<=s && qe>=e)
	{
		auto loc = upper_bound(st[i].begin(),st[i].end(),k);
		return max((int)(st[i].end()-loc),0);
	}
	int mid = (s+e)/2;
	return query(st,s,mid,2*i+1,qs,qe,k)+query(st,mid+1,e,2*i+2,qs,qe,k);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)	
		cin>>arr[i];

	int sz = 2*pow(2,(int)ceil(log2(n)))-1;
	vector<int> *st = new vector<int>[sz]; 
	buildSt(arr,0,n-1,st,0);
	// for(int i=0;i<sz;i++)
	// {
	// 	for(int j=0;j<st[i].size();j++)
	// 		cout<<st[i][j]<<" ";
	// 	cout<<endl;
	// }
	int q;
	cin>>q;
	while(q--)
	{
		int qs,qe, k;
		cin>>qs>>qe>>k;
		cout<<query(st,0,n-1,0,qs-1,qe-1,k)<<endl;
	}
	return 0;
}
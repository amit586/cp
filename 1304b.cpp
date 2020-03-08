#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	fio
	int n,m;
	cin>>n>>m;
	string s[n];
	bool marked[n];
	for(int i=0;i<n;i++)
		marked[i]=true;
	f(i,0,n)
		cin>>s[i];
	map<int, int> p;
	for (int i = 0; i < n-1; ++i)
	{
		if(marked[i])
		{
			string copy(s[i]);
			reverse(copy.begin(),copy.end());
			for(int j=i+1;j<n;j++)
			{
				if(s[j]==copy)
				{
					p.insert(pair<int, int>(i, j));
					marked[i]=marked[j]=false;
				}
			}
		}
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	 code cout<<marked[i]<<" ";
	// }
	int palindrome=-1;
	
	for(int i=0;i<n;i++)
	{
		string copy(s[i]);
		reverse(copy.begin(),copy.end());
		if(s[i]==copy && marked[i])
			palindrome=i;
	}
	// cout<<palindrome<<endl;

	int size=0;
	size=2*m*p.size();
	if(palindrome!=-1)
		size+=m;
	string ans;
	for(auto it: p)
		{
			ans+=s[it.first];
		}
		if(palindrome!=-1)
			ans+=s[palindrome];
		for(auto it = p.rbegin();it!=p.rend();it++)
			ans+=s[it->second];
	cout<<size<<endl<<ans<<endl;
	return 0;
}

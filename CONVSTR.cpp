#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second

using namespace std;

void solve()
{
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	int freq[300]={0},loc[300];
	for(int i=0;i<n;i++)
		freq[a[i]]++,loc[a[i]]=i;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]<b[i] || freq[b[i]]==0)
			{
				cout<<-1<<endl;
				return;
			}
		}
	}
	vector<vector<int>> hash(27);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
			hash[b[i]-'a'].push_back(i);
	}

	int count=0;

	for(int i=0;i<27;i++)
		if(hash[i].size()>0)
			count++;
	cout<<count<<endl;
	for(int i=26;i>=0;i--)
	{
		if(hash[i].size()>0)
		{
			hash[i].push_back(loc[i+'a']);
			sort(all(hash[i]));
			cout<<hash[i].size()<<" ";
			for(int j=0;j<hash[i].size();j++)
				cout<<hash[i][j]<<" ";
			cout<<endl;
		}
	}
}


int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		
		solve();
	}
	return 0;
}

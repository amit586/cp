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
	int TC;
	//cin>>TC;
	TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		map<string,int> db;
		string request;
		for(int i=0;i<n;i++)
		{	
			cin>>request;
			map<string,int>::iterator itr = db.find(request);
			if(itr==db.end())
			{
				cout<<"OK\n";
				db.insert({request,1});
			}
			else
			{
				cout<<itr->first<<itr->second<<"\n";
				itr->second+=1;
			}
		}
	}
	return 0;
}

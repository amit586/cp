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


int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n,m;
		cin>>n>>m;
		std::vector<vector<int>> v(n,vector<int> (m));
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++)
				cin>>v[i][j];
		}
		// if(n==1)
		// {
		// 	int i=0;
		// 	for(;i<m;i++)
		// 	{
		// 		if(v[0][i]==1)
		// 			break;
		// 	}
		// 	if(i==m)
		// 	{
		// 		cout<<"Ashish\n";
		// 	}else
		// 		cout<<"Vivek\n";
		// 	continue;
		// }

		// if(m==1)
		// {
		// 	int i=0;
		// 	for(;i<n;i++)
		// 	{
		// 		if(v[i][0]==1)
		// 			break;
		// 	}
		// 	if(i==n)
		// 	{
		// 		cout<<"Ashish\n";
		// 	}else
		// 		cout<<"Vivek\n";
		// 	continue;
		// }
		int er = 0,ec=0;
		for(int i=0;i<n;i++)
		{
			int j=0;
			for(;j<m;j++)
				if(v[i][j]==1)
					break;
			if(j==m)
				er++;
		}

		for(int i=0;i<m;i++)
		{
			int j=0;
			for(;j<n;j++)
				if(v[j][i]==1)
					break;
			if(j==n)
				ec++;
		}
		//cout<<er<<" "<<ec<<endl;
		min(ec,er)%2==0?cout<<"Vivek\n":cout<<"Ashish\n";		
	}
	return 0;
}

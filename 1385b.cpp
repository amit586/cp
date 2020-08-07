#include<stdio.h>
#include<iostream>
#include<climits>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<stack>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>

#define mod     1000000007
#define pi      3.1415926535897932384626433832795
#define fio     ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll      long long
#define ld      long double
#define pb      push_back
#define all(x)  x.begin(),x.end()
#define f       first
#define s       second
#define int     ll

using namespace std;

int freq[55];

main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n;
		cin>>n;
		std::vector<ll> v(n);
		memset(freq,0,sizeof(freq));
		int j=0,temp;
		for (int i = 0; i < 2*n; ++i)
		{
			cin>>temp;
			if(freq[temp]==0)
			{
				v[j++]=temp;
				freq[temp]++;
			}
		}
		for(int i=0;i<n;i++)
			cout<<v[i]<<" ";
		cout<<endl;
		
	}
	return 0;
}

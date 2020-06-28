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
#define pi      3.14159265D897932384626433832795
#define fio     ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll      long long
#define ld      long double
#define pb      push_back
#define all(x)  x.begin(),x.end()
#define f       first
#define s       second
#define int     ll
#define D 40
using namespace std;


vector<ll> pw(D);

main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	
	pw[0]=1;
	for(int i=1;i<D;i++)
		pw[i]=pw[i-1]*2;

	while(TC--)
	{
		int n,k,j,mxlen=0;
		cin>>n>>k;
		
		ll temp;
		vector<ll> b(D,0);
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			j=0;
			while(temp)
			{
				b[j++]+=(temp%2);
				mxlen = max(mxlen,j);
				temp/=2;
			}
		}
		
		ll sum = 0,mx,mxj;
		int ones=0;
		vector<ll> ans(D,0);
		for(int i=0;i<D;i++)
			if(b[i]>0)
				ones++;
		//cout<<"o: "<<ones<<endl;
		if(ones<k)
		{
			for(int i=0;i<D;i++)
				if(b[i]>0)
					ans[i]=1,k--;
			int loc=0;
			while(k)
			{
				if(ans[loc]==0)
					ans[loc]=1,k--;
				loc++;
			}

		}
		else
		{
			for(int i=0;i<k;i++)
			{
				mx=0,mxj=0; 
				for(int j=D-1;j>=0;j--)
				{
					if(pw[j]*b[j]>=mx)
					{
						mx = pw[j]*b[j];
						mxj = j;
					}
				}
				b[mxj]=0;
				ans[mxj]=1;
			}
		}
		// for(int i=0;i<13;i++)
		// 	cout<<b[i]<<" ";
		// cout<<endl;
		// for(int i=0;i<13;i++)
		// 	cout<<ans[i]<<" ";
		// cout<<endl;

		for(int i=0;i<D;i++)
			sum+=ans[i]*pw[i];
		cout<<sum<<endl;		
	}
	return 0;
}

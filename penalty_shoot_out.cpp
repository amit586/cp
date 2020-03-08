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
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll s_1=0,s_2=0,c_1=n,c_2=n;
		int ans=2*n;
		for(int i=0;i<2*n;i++)
		{
			if(i%2==0)
			{
				if(s[i]=='1')
					s_1++;
				c_1--;
			}
			else
			{
				if(s[i]=='1')
					s_2++;
				c_2--;
			}
			if(s_1>s_2+c_2 || s_2 > s_1 + c_1)
			{
				ans = i+1;
				break;
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}

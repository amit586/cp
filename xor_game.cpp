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
	cin>>TC;
	while(TC--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll x=0;
		f(i,0,n)
		{
			cin>>a[i];
			x^=a[i];
		}		
		ll temp;
		unordered_map <ll , ll > m;
		f(i,0,n)
		{
			cin>>temp;
			x^=temp;
			auto it = m.find(temp);
			if(it!=m.end())
				m[temp]++;
			else
				m[temp]=1;
		}
		ll b[n];
		bool flag=true;
		f(i,0,n)
		{
			auto it = m.find(a[i]^x);
			if(it!=m.end() && it->second > 0)
			{
				it->second--;
				b[i] = a[i]^x;
			}
			else
			{
				flag = false;
				break;
			}

		}
		if(flag)
		{
			f(i,0,n)
				cout<<b[i]<<" ";
		}
		else
			cout<<-1;
		cout<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
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
	{ll m,n;
		cin>>m>>n;
		if(n%2==0)
		{
			cout<<m*(n/2)<<endl;
		}
		else
		{
			if(m%2==0)
			{
				cout<<m*(n/2) + m/2<<endl;
			}
			else
			{
				cout<<m*(n/2) + m/2 +1<<endl;
			}
		}
		
	}
	return 0;
}

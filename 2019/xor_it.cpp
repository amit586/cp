#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(ll i=j;i<k;i++)
// #define endl "\n"
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	ll l,r;
	cin>>T;
	while(T--)
	{
		cin>>l>>r;
		
		ll g=0;
		f(i,l,r+1)
		{
			if(i<=1)
			{
				g--;
			}
			else if(i%2==1)
			{
				g+=i-1;
			}
			else
			{
				int j=1;
				ll temp_i=i,pow_2=2,b=2;

				while(temp_i%pow_2==0)
					{
						temp_i=temp_i/2;
						b*=2;
						j++;
					}

				if(b/2==i)
					g--;
				else
					g+=i-b/2;

			}
			//cout<<g<<" ";
		}
		cout<<g<<endl;	

	}
}
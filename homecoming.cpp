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
		ll a,b,p;
		cin>>a>>b>>p;
		string s;
		cin>>s;
		int n = s.length();
		int i=n-1;
		while(i>=0 && p>=0)
		{
			if(s[i]=='A' && p-a>=0)
			{
				p-=a;
				while(s[i]=='A' && i>=0)
					i--;

			}
			else if(s[i]=='B' && p-b>=0)
			{
				p-=b;
				while(s[i]=='B' && i>=0)
					i--;
			}
			else
				break;
			// cout<<"i "<<i<<endl;
		}
		cout<<'i'<<" "<<i<<endl;
		if((i+1 <n-1) && s[i]!=s[i+1])
			i++;
		cout<<i+1<<endl;
		
	}
	return 0;
}

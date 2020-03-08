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
		string a,b,c;
		cin>>a>>b>>c;
		int n = a.length();
		int flag=true;
		for(int i=0;i<n;i++)
		{
			if( c[i]!=a[i] && c[i]!=b[i])
			{
				flag=false;
				break;
			}
		}
		flag?cout<<"YES\n":cout<<"NO\n";
		
	}
	return 0;
}

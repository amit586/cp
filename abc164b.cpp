#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;

int main()
{
	fio
	int TC;
	//cin>>TC;
	TC=1;
	while(TC--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		bool takahashi=true;
		while(a>0 && c>0)
		{
			if(takahashi)
			{
				c-=b;
				takahashi=false;
			}
			else
			{
				a-=d;
				takahashi=true;
			}

		}
		(a>0)?cout<<"Yes\n":cout<<"No\n";
		
	}
	return 0;
}

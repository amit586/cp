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
		ll A,B,x=1,count=0;
		cin>>A>>B;
		while((pow(10,x)-1)<=B)
		{
			x++;
			count+=A;
		}
		cout<<count<<endl;			
	}
}

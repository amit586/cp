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
		int a,b;
		cin>>a>>b;
		int x=a,y=b;
		int q=a%10,s=b%10,p,r;
		a = a/10;
		p=a%10;
		b=b/10;
		r = b%10;
		int mx = max(x+y,10*(p+q)+r+s);
		mx = max(mx,10*(r+s)+p+q);
		cout<<mx<<endl;
		



		
		
	}
	return 0;
}

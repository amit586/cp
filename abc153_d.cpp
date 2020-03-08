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
	ll h;
	cin>>h;
	ll attacks = 0,monsters = 1;
	while(h>0)
	{
		h = h/2;
		attacks+=monsters;
		monsters*=2;
		
	}
	cout<<attacks<<endl;
	return 0;
}

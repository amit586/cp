#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	fio
	int T,N;
	cin>>T;
	while(T--)
	{
		double f,d,a,b,tb,t2;
		cin>>f>>d>>a>>b;
		tb=f/b;
		f=f+d;
		t2=sqrt(2*(f)/a);
		tb<t2?cout<<"Bolt\n":cout<<"Tiger\n";
	}
}
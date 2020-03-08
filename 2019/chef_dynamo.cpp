#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
	  int n;
	  ll a,b,c=1,d,e;
	  cin>>n>>a;
	  string s;
	  f(i,0,n)
	  {
	  	s+='9';
	  }
	  ll s1 = stoll(s);
	  cout<<s1<<endl;
	  cin>>b;
	  
	  cout<<c<<endl;
	  cin>>d;
	  e = s1 - (d+1+b+a);
	  cout<<e<<endl;

	  if(s1==(a+b+c+d+e))
	  {
	  	cout<<1<<endl;
	  }
	  else
	  {
	  	cout<<-1<<endl;
	  }


	}
}

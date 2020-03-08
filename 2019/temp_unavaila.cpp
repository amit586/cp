#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		ll a,b,c,r;
		cin>>a>>b>>c>>r;
		if(a>b)
			swap(a,b);
		//cout<<"a: "<<a<< " b "<<b;

		ll r1 = c-r ,r2 = r+c;
		if(r1>r2) swap(r1,r2);
		ll t1 , t2;

		if(c<=a)
		{
			if(r2>=a && r2<=b)
			{
				cout<<b-r2<<endl;
			}
			else if(r2>=b)
				cout<<0<<endl;
			else
				cout<<b-a<<endl;
		}
		else if(c>=a && c<=b)
		{	
			ll t1=0,t2=0;
			if(r1>=a)
				t1 = r1-a;
			if(r2<=b)
				t2 = b-r2;
			cout<<t1+t2<<endl;

		}
		else
		{
			if(r1>=a && r1<=b)
				cout<<r1-a<<endl;
			else if (r1<=a)
			{
				cout<<0<<endl;
			}
			else 
				cout<<b-a<<endl;

		}
	}
}
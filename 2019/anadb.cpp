
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T,a,b,n,dif;
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		a>b?a=a-b:a=b-a;
		n = (-1+sqrt(1+8*a))/2;
		if((n*(n+1))/2<a) n++;
		while(((n*(n+1))/2-a)%2!=0)
			n++;
		cout<<n<<endl;
	}
}
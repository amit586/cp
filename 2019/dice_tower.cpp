
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long x;
		cin>>x;
		if(x<14)
		{
			cout<<"NO\n";
			continue;
		}
		x=x%14;
		if(x>0 && x<7)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
}
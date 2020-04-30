#include <bits/stdc++.h>
//#include <boost/functional/hash.hpp>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		long long n;
		cin>>n;
		cout<<(n%2==0?n/2-1:n/2)<<endl;
	}
	return 0;
}
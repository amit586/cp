#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		long long x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<abs((x2-x1)*(y2-y1))+1<<endl;
	}
	return 0;
}
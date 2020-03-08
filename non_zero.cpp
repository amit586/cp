#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,temp;
		cin>>n;
		long long product=1,sum=0,moves=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			if(temp==0)
			{
				temp++;
				moves++;
			}
			sum+=temp;
		}
		if(sum==0)
			moves++;
		cout<<moves<<endl;
	}
	return 0;
}
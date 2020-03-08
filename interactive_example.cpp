#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int l=1,r=1000000,mid;

	while(l<r)
	{
		mid = (l+r+1)/2;
		cout<<mid<<endl;
		cout << flush;
		string resp;
		cin>>resp;
		if(resp.find("<")!=string::npos)
		{
			r = mid-1;
		}
		else
		{
			l = mid;
		}
		//cout<<"l : "<<l<<" r: "<<r<<endl;

	}
	cout<<"! "<<l<<endl;
	cout << flush;

	return 0;
}
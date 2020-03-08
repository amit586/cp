#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long arr[2*n];
		for(int i=0;i<2*n;i++)
			cin>>arr[i];
		sort(arr,arr+2*n);
		// if(n%2!=0)
			cout<<abs(arr[n]-arr[n-1])<<endl;
		// else
		// 	cout<<min(abs(arr[n]-arr[n-1]),abs(arr[n+1]-arr[n]))<<endl;
	}
	return 0;
}
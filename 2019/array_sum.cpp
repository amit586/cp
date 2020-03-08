#include <iostream>
using namespace std;

int main() {
	int t,n,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
	    cin>>n;
	    int arr[n]={0};
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}

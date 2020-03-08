#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={1,8,7,5,9,6,5,6,9,10};
	std::sort(arr,arr+10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<endl;
}
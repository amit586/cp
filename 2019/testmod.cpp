
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int arr1[n] = {0 , 0 ,0 ,1,1};
	int max_count=0,count = 0 ,index=0 ,max_index=0 ;

	for(int i=0;i<n-1;i++)
	{
		cout<<max_count<<endl;
		if(arr1[i]!=arr1[i+1])
		{
			
			if(count>max_count)
			{
				max_count = count;
				max_index = index;
			}
			index = i+1;
			count = 1;
		}
		if(arr1[i]==arr1[i+1])
		{
			count ++;
		}
	}
	if(count>max_count)
		max_count=count;
	cout<<max_count<<' '<<max_index<<endl;
}
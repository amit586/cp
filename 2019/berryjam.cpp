
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;	

		int arr1[N],arr2[N],ones=0;twos = 0;
		
		/// input
		for(int i=N-1;i>=0;i--)
		{
			cin>>arr1[i];
			if(arr1[i]==1)
				ones++;
			else
				twos++;
		}
		for(int i=0;i<N;i++)
		{
			cin>>arr2[i];
			if(arr1[i]==1)
				ones++;
			else
				twos++;
		}

		// start eating

		

	}
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x=0;
	int arr[5][4][3];
	for(int i=0;i<5;i++)
		for(int j=0;j<4;j++)
			for(int k=0;k<3;k++)
				arr[i][j][k] = x++;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int k=0;k<3;k++)
			{
				cout<<&arr[i][j][k]<<"\t";
			}
			cout<<endl;
		}
		cout<<"\n\n\n";
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int k=0;k<3;k++)
			{
				cout<<*(*(*(arr + i) +j) + k)<<"\t";
			}
			cout<<endl;
		}
		cout<<"\n\n\n";
	}
	cout<<*((int *)arr + 10 )<<endl;

}
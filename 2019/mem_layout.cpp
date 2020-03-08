#include <iostream>
#include <limits.h>
using namespace std;

int flo[2]={1,2};

int main(int argc, char const *argv[])
{
	int arr[100];
	static int i=INT_MAX;
	int ar[10];//= new int[10];
	int len = sizeof(ar)/sizeof(int);
	cout<<len<<endl;
	cout<<ar<<endl;
	return 0;
}
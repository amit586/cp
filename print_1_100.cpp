#include<bits/stdc++.h>

int x=0;

using namespace std;
class print
{	//static int x;
	public:
		static int y;
		print()
		{
		 	cout<<++y<<endl;
		 	//x++;
		}
};

int print::y = 0;

int main(int argc, char const *argv[])
{
	print arr[100];
	return 0;
}
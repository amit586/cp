#include<bits/stdc++.h>
using namespace std;

void print()
{
	
}

template <typename T,typename... types>
void print(T var1,types... var2)
{
	cout<<var1<<endl;
	print(var2...);
}


int main(int argc, char const *argv[])
{
	print(1,2,3,5,"string");
	return 0;
}
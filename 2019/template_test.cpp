#include<iostream>
using namespace std;

template <typename  T>
T add (T a, T b)
{
	//cout<<sizeof(T)<<" type\n";
	return a+b;
}


int main(int argc, char const *argv[])
{
	/* code */
	cout<<add<int>(5,4)<<endl;
	cout<<add<float>(56.4f,5.26f)<<endl;
	cout<<add<double>(3.4,5.7)<<endl;
	return 0;
}
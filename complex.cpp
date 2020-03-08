#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	complex <float> c1(3.0,4.0),c2(6.0,8.0);
	complex <double> c3 = polar(5.0,0.5);
	cout<<abs(c1)<<endl; 
	cout<<arg(c1)*180/3.1415<<endl;
	cout<<"c3 : "<<real(c3)<<" "<<imag(c3)<<" : mod :"<<abs(c3)<<" : arg :"<<arg(c3)<<endl;
	return 0;
}
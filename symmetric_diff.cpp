#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int first[] = { 5, 10, 15, 20, 25 }; 
    int second[] = {1,2,10,15,60};
    vector <int > v(10);
    auto it =   set_symmetric_difference(first,first+5,second,second+5,v.begin());
    cout<<it-v.begin()<<endl;
    for(auto it:v)
    {
    	cout<<it<<endl;
    }
}
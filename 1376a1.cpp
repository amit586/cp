#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in;
	ofstream out;
	in.open("sort.in");
	int n;
	in>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		in>>v[i];
	sort(v.begin(),v.end());
	out.open("sortans.txt");
	for(int i=0;i<n;i++)
		out<<v[i]<<" ";
	in.close();
	out.close();
	return 0;
}
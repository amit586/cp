#include<bits/stdc++.h>

using namespace std;

void dist_pairs(string s)
{
	map < pair<char , char> , int > m;

	for(int i=0;i<s.length()-1;i++)
		m[make_pair(s[i],s[i+1])]++;
	for(auto it = m.begin();it!= m.end();it++)
	{
		cout<<it->first.first<<it->first.second<<'-'<<it->second<<endl;
	}

}


int main()
{
	string s = "abcacdcacabacaassddssklac";
	dist_pairs(s);
	return 0;
}
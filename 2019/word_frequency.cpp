#include<bits/stdc++.h>

using namespace std;

void frequency(string str)
{
	map <string , int> FW;
	stringstream s(str);
	string word;
	while(s>>word)
	{
		FW[word]++;
	}
	for(auto m = FW.begin();m!=FW.end();m++)
	{
		cout<<m->first<<'-'<<m->second<<endl;
	}

}

int main()
{
	string s = "geeks for geeks for geeks";
	frequency(s);
	return 0;
}
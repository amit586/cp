#include<bits/stdc++.h>
using namespace std;

string findPalindrome(const string &s)
{
	string a = s;
	reverse(a.begin(),a.end());
	a = s+"#"+a;
	int lps[a.size()]={0};
	int len=0,i=1;
	while(i<a.size())
	{
		if(a[i]==a[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len==0)
			{
				lps[i]=0;
				i++;
			}
			else
				len = lps[len-1];
		}
	}	
	return s.substr(0,len);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=0;
		while(l<(int)s.size()-l-1)
		{
			if(s[l]!=s[s.size()-1-l])
				break;
			l++;
		}
		
		if(l>0)
			cout<<s.substr(0,l);
		
		if(s.size()>2*l)
		{
			string s1 = s.substr(l,s.size()-2*l);
			string a = findPalindrome(s1);
			
			reverse(s1.begin(),s1.end());
			string b = findPalindrome(s1);
			
			a.size()<b.size()?cout<<b:cout<<a;

		}
	
		if(l>0)
			cout<<s.substr(s.size()-l ,l);
		cout<<endl;
	}
}
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
using namespace std;

void generate_next(string &s)
{
	int n = s.size();
	int i=0;
	for(;i<n-1;i++)
	{
		if(abs(s[i]+1-s[i+1])<=1 && s[i]!='9')
		{
			s[i]++;
			i--;
			while(i>=0)
			{
				if((s[i+1]-'0' -1)>=0)
					s[i]=s[i+1]-1;
				i--;
			}
			return;
		}

	}
	if(i==n-1 )
	{
		if( s[i]!='9')
		{
			s[i]=s[i]+1;
			i--;
			while(i>=0)
			{
				if((s[i+1]-'0' -1)>=0)
					s[i]=s[i+1]-1;
				i--;
			}
			return;
		}
		else if(s[i]=='9')
		{
			s+='1';
			while(i>=0)
			{
				s[i]='0';
				i--;
			}
		}

	}
}

int main()
{
	fio
	ll k;
	cin>>k;
	string s;
		// cin>>s;
	s+='0';
	while(k--)
	{
		generate_next(s);
		//cout<<s<<endl;
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	
	return 0;
}

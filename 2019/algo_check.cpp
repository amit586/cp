#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int len = s.length();

		if(len<=1)
		{
			cout<<"NO\n";
			continue;
		}

		string comp;
		comp+=s[0];

		int count=1;

		f(i,0,len-1)
		{
			if(s[i]==s[i+1])
			{
				count++;
			}
			else
			{
				comp+=to_string(count);
				comp+=s[i+1];
				count = 1;
			}
		}
		//cout<<count<<endl;
		comp+=to_string(count);
		//if(s[len-1]==s[len-2])
		//cout<<comp<<endl;
		comp.length()<len?cout<<"YES\n":cout<<"NO\n";
	}
}
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
	int T,N;
	cin>>T;
	while(T--)
	{
		string s;
		int k;
		cin>>s;
		cin>>k;
		short hash[26]={0};
		f(i,0,s.length())
		{
			//cout<<(int)(s[i]-'a')<<endl;
			hash[(int)(s[i]-'a')]++;
		}
		
		int len = s.length(),i=0;
		string t;

		while(len>0 && i<26)
		{
			if(hash[i]==0)
			{
				t+=(char)('a'+i);
				len--;
			}
			else
			{
				if(k>0)
				{
					t+=(char)('a'+i);
					len--;
					k--;
				}
				
			}
			i++;
			
		}
		// cout<<"hash : ";
		// f(i,0,26) cout<<hash[i]<<" ";
		// cout<<endl;
		if(s.length()==t.length())
		{
			cout<<t<<endl;
		}
		else
		{
			cout<<"NOPE"<<endl;
		}

	}
}
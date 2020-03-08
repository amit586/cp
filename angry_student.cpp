#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		int k;
		string s;
		cin>>k>>s;
		int i=0;
		// while(s[i]!='A')
		// {
		// 	i++;
		// }
		// if(i==k-1)
		// {
		// 	cout<<0<<endl;
		// 	continue;
		// }
		//i++;
		int max_len=0,len=0;
		while(s[i]!='A' && i<k)
		{
			i++;
		}
		//cout<<i<<endl;
		for(;i<k;i++)
		{
			if(s[i]=='A')
			{
				
				len=0;
			}
			else if(s[i]=='P')
			{
				while(s[i]=='P' && i<k)
				{
					i++;
					len++;
				}
				//cout<<" len : "<<len<<" max ln :"<<max_len<<" i "<<i<<endl;
				if(len>max_len)
				{
					max_len=len;
				}
				len=0;
			}


		}
		cout<<max_len<<endl;
		
	}
}

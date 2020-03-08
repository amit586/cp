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
		long int n;
		cin>>n;
		string s;
		cin>>s;
		long len = s.length();
		if(len==1 && s[0]=='S')
		{
			cout<<n/2<<endl;
			continue;
		}
		else if(len==1 && s[0]!='S')
		{
			cout<<0<<endl;
			continue;
		}
		long count=0;
		f(i,0,len-1)
		{
			if(s[i]=='S'&& s[i+1]=='S')
			{
				count++;
			}
		}
		count*=n;
		if(s[0]=='S' && s[1]!='S' && s[len-1]=='S' && s[len-2]!='S')
		{
			count+=n-1;
		}

		cout<<count<<endl;
	}


}
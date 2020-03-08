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
		int n;
		cin>>n;
		n--;
		string s;
		cin>>s;
		long long sum=0;
		f(i,0,n)
			sum+=s[i]-'0';
		while((s[n-1]-'0')%2==0  && n>=0)
		{
			cout<<"sum : "<<sum<<endl;
			sum-=(s[n-1]-'0');
			n--;
		}
		if(n<0)
		{
			cout<<-1<<endl;
			continue;
		}
		else if(sum%2==0)
		{
			string res(s,0,n);
			cout<<res<<endl;
		}
		else
		{
			int flag=0;
			string res="";
			for(int i=0;i<n-1;i++)
			{
				if((s[i]-'0')%2!=0 && flag==0)
				{
					flag++;
				}
				else
					res+=s[i];
			}
			if(flag==0)
				cout<<-1<<endl;
			else 
				cout<<res<<endl;
		}
	}
	return 0;
}

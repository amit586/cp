#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		long long sum=0;
		f(i,0,n)
		{
			sum+=s[i]-'0';
		}
		
		while(( sum%2!=0 || (s[n-1]-'0')%2==0 )  && n>0)
		{
			//cout<<"sum: "<<sum<<endl;
			sum-=(s[n-1]-'0');
			n--;
		}
		string res(s,0,n);
		if(n>0)
			cout<<res<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}

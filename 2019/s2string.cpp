#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		string s1,s;
		cin>>s1;
		f(i,0,n)
		{
			s.append(s1);
		}	

		// cout<<"s: "<<s<<endl;
		ll len = s.length(),count=0;
		
		f(i,0,len-1)
		{
			if(s[i]=='S'&& s[i+1]=='S')
			{
				count++;
				i+1;
			}
		}
		cout<<count<<endl;
	}
}
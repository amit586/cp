#include<stdio.h>
#include<iostream>
#include<climits>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<stack>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>

#define mod     1000000007
#define pi      3.1415926535897932384626433832795
#define fio     ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll      long long
#define ld      long double
#define pb      push_back
#define all(x)  x.begin(),x.end()
#define f       first
#define s       second
#define int     ll

using namespace std;

void change(string &a,int i)
{
	for(int j=0;j<=i;j++)
		if(a[j]=='0')
			a[j]='1';
		else
			a[j]='0';
	for(int j=0;j<=i/2;j++)
		swap(a[j],a[i-j]);
}


main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int n;
		string a,b;
		cin>>n>>a>>b;
		std::vector<ll> p;
		int s=0,end=n-1;
		bool flag=true;
		for(int i=n-1;i>0;i--)
		{
			if(flag and (a[j]!=b[i]))
			{
				if(a[0]=='1' and b[i]=='1')
					a[0]='0',p.pb(1);
				else if(a[0]=='0' and  b[i]=='0')
					a[0]='1',p.pb(1);
				change(a,i);
				p.pb(i+1);
			}
			else if(!flag and a[j]==b[i])

		}
		if(a[0]!=b[0])
		{
			p.pb(1);
			if(a[0]=='0')
				a[0]='1';
			else
				a[0]='0';
		}
		//cout<<"ans"<<endl;
		cout<<p.size()<<" ";
		for(int i=0;i<p.size();i++)
			cout<<p[i]<<" ";
		cout<<endl;
		//cout<<endl<<a<<endl<<b<<endl<<endl;
		
	}
	return 0;
}

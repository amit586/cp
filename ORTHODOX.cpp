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

bool fun1(vector<ll> &v,int n)
{
	set<ll> s;
	ll r=0;
	//cout<<"print:  ";
	for(int i=0;i<n;i++)
	{
		r|=v[i];
	//	cout<<r<<" ";
		if(s.find(r)==s.end())
			s.insert(r);
		else{
			return true;
		}
	}
	//cout<<endl;
	return false;
}


bool fun2(vector<ll> &v,int n)
{
	set<ll> s;
	ll r=0;
	//cout<<"print:  ";
	for(int i=n-1;i>=0;i--)
	{
		r|=v[i];
	//	cout<<r<<" ";
		if(s.find(r)==s.end())
			s.insert(r);
		else{
			return true;
		}
	}
	//cout<<endl;
	return false;
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
		cin>>n;
		std::vector<ll> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		cout<<((fun1(v,n)||fun2(v,n))?"NO\n":"YES\n");
		
	}
	return 0;
}

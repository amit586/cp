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

int solve(ll n)
{
	if(n==1)
		return 0;
	if(n%3!=0)
		return -1;
	int po3=0,po2=0;
	ll x = n;
	while(x%3==0)
		po3++,x/=3;
	while(x%2==0)
		po2++,x/=2;
	if(x!=1 or po2>po3)
		return -1;
	return max((ll)0,po3-po2)+po3;



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
		cout<<solve(n)<<endl;
		
	}
	return 0;
}

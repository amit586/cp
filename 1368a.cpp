#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<queue>
#include<chrono>
#include<unordered_map>
#include<unordered_set>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
using namespace std;


int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	std::vector<ll> v(60);
	v[0]=0;v[1]=1;
	for (int i = 2; i<60; ++i)
		v[i]=v[i-1]+v[i-2];
	
	while(TC--)
	{
		ll a,b,n,x=0;
		cin>>a>>b>>n;
		
		int count=1;
		if(a<b)
			swap(a,b);
		x = a;
		while(v[count]*a+v[count-1]*b<=n)
			count++;

		cout<<count-1<<endl;
	}
	return 0;
}

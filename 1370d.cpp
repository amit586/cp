#include<stdio.h>
#include<climits>
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
vector<int> v(200005);
int n,k;

bool check(int x,int curr)
{
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(!curr)
			curr^=1,ans++;
		else if(v[i]<=x and curr)
			ans++,curr^=1;
	}
	return ans>=k?true:false;
}

int binarySearch(int low,int high)
{
	int mid;
	while(low<high)
	{
		mid = (low+high)/2;
		if(check(mid,0)|| check(mid,1))
			high=mid;
		else
			low = mid+1;
	}
	return low;
}

int main()
{
	fio
	cin>>n>>k;
	int mn=INT_MAX,mx=INT_MIN;
	for(int i=1;i<=n;i++)	cin>>v[i],mn = min(mn,v[i]),mx=max(mx,v[i]);
	cout<<binarySearch(mn,mx)<<endl;
	return 0;
}

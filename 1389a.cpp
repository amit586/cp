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


main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int l,r;
		cin>>l>>r;
		if(r<2*l)
			cout<<-1<<" "<<-1<<endl;
		else
			cout<<l<<" "<<2*l<<endl;
	}
	return 0;
}

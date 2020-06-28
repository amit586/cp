#include<bits/stdc++.h>
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
	while(TC--)
	{
		ll n;
		cin>>n;
		vector<ll> ans;
		ll base=1;
		while(n)
		{
			if(n%10!=0)
				ans.push_back(base*(n%10));
			base*=10;
			n = n/10;
		}
		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
		cout<<endl;
		
	}
	return 0;
}

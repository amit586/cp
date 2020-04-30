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
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		ll n;
		string s,r;
		cin>>s>>r;
		n=s.size();
		vector<pair<int,int>> li;
		ll ix=0,jx=0;
		ll i=0;
		while(i<n)
		{
			if(s[i]!=r[i])
			{
				jx=i;
				while(s[i]!=r[i]&& i<n)
					i++;
				ix=i-1;
				li.push_back({ix,jx});
				// cout<<"ix: "<<ix<<" jx: "<<jx<<endl
			}
			else
				i++;
		}

		ll k=li.size();
		ll l=0;
		for(int i=0;i<li.size();i++)
			l+=(abs(li[i].first-li[i].second)+1);
		cout<<l*k<<endl;

		
	}
	return 0;
}

#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define endl "\n"
#define ll long long
#define ld long double

using namespace std;

class problems
{
	public:
	ll time;
	bool hard;

	problems()
	{
		time = 0;
		hard = 0;
	}
};

// bool comparator(problems const &a, problems const &b)
// {
// 	return a.time<b.time;
// }

int main()
{
	fio
	int m;
	cin>>m;
	while(m--)
	{
		int n;
		ll T,a,b;
		cin>>n>>T>>a>>b;

		problems p[n];
		
		f(i,0,n)
			 cin>>p[i].hard;
		f(i,0,n)
			 cin>>p[i].time;

		
		sort(p,p + n,[](problems const &a , problems const &b)->bool
						{
							return a.time<b.time;
						}
			);

		f(i,0,n)
			cout<<p[i].hard<<" "<<p[i].time<<endl;



	}
}
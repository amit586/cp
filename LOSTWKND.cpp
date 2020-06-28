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
		int p,temp,hr=0;
		for (int i = 0; i < 5; ++i)
		{
			cin>>temp;
			hr+=temp;

		}
		cin>>p;
		24*5>=hr*p?cout<<"No\n":cout<<"Yes\n";

	}
	return 0;
}

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

class spell
{
public:
	ll A,B;
	// spell(ll X,ll Y)
	// {
	// 	A=X;
	// 	B=Y;
	// }
};


int main()
{
	fio
	ll H,N;
	cin>>H>>N;
	spell arr[N];
	f(i,0,N)
	{
		cin>>arr[i].A>>arr[i].B;
	}
	sort(arr,arr+N,[](spell X,spell Y)->bool
		{
			return X.B<Y.B;
		});

	return 0;
}

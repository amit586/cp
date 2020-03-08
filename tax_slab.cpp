#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		ll n;
		cin>>n;
		ll t1,t2,t3,t4,t5,t6,t7;
		t1 = 0;
		t2 = max((min((ll)250000,n-250000)*5/100),(ll)0);
		t3 = max((min((ll)250000,n-500000)*10/100),(ll)0);
		t4 = max((min((ll)250000,n-750000)*15/100),(ll)0);
		t5 = max((min((ll)250000,n-1000000)*20/100),(ll)0);
		t6 = max((min((ll)250000,n-1250000)*25/100),(ll)0);
		t7 = max(((n-1500000)*30/100),(ll)0);
		cout<<n-t1-t2-t3-t4-t5-t6-t7<<endl;


	}
	return 0;
}
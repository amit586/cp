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
	ld T;
	cin>>T;
	ld sum=0;
	while(T)
	{
			sum+=1/T;
			T--;
	}
	cout<<sum<<endl;
}

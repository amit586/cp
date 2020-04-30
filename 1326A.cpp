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
	while(TC--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<-1<<endl;
			continue;
		}
		string s(n,'2');
		s[n-1]='3';
		if((n-1)*2%3==0)
			s[n-2]='4';
		cout<<s<<endl;
	}
	return 0;
}

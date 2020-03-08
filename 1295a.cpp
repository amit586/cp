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
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		//string s;
		int ones = n/2;
		int seven = n%2;

		string s(ones,'1');
		if(seven==1)
			s[0]='7';	
		cout<<s<<endl;

	}
	return 0;
}

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
	fio
	int TC;
	//cin>>TC;
	TC=1;
	while(TC--)
	{
		int s,w;
		cin>>s>>w;
		cout<<(w>=s?"unsafe":"safe")<<endl;
		
	}
	return 0;
}

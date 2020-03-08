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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int left =0,right=0;
	f(i,0,n)
	{
		if(s[i]=='L')
			left++;
		else
			right++;
	}
	cout<<left+right+1<<endl;
}

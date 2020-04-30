#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int axis(char c)
{
	if(c=='L' || c=='R')
		return 0;
	else
		return 1;
}

int main()
{
	fio
	int TC;
	cin>>TC;
	while(TC--)
	{
		int n;
		string s;
		cin>>n>>s;

		int x=0,y=0,prev_axis=3;

		for(int i=0;i<n;i++)
		{
			if(axis(s[i])!=prev_axis)
			{
				prev_axis=axis(s[i]);
				if(s[i]=='L')
					x--;
				else if(s[i]=='R')
					x++;
				else if(s[i]=='U')
					y++;
				else
					y--;
			}
		}		
		cout<<x<<" "<<y<<endl;		
	}
	return 0;
}

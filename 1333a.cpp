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
	//TC=1;
	while(TC--)
	{
		int n,m;
		cin>>n>>m;
		string str[n];
		int black=0;
		int white=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(i%2==0)
				{
					if(j%2==0)
					{
						str[i]+='B';
						black++;
					}
					else
					{
						str[i]+='W';
						white++;
					}
				}
				else
				{
					if(j%2==1)
					{
						str[i]+='B';
						black++;
					}
					else
					{
						str[i]+='W';
						white++;
					}
				}

			}
		}
		if(black==white+1)
		{
			for(int i=0;i<n;i++)
				cout<<str[i]<<endl;
		}
		else
		{
			str[0][1]='B';
			for(int i=0;i<n;i++)
				cout<<str[i]<<endl;

		}
	}
	return 0;
}

#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		int n,k1,k2;
		cin>>n>>k1>>k2;
		int max =0;
		int temp=0;
		f(i,0,k1)
		{
			cin>>temp;
			if(temp>max)
			{
				max = temp;
			}
		}

		int max2=0,temp2=0;
		f(i,0,k2)
		{
			cin>>temp2;
			if(temp2>max2)
			{
				max2=temp2;
			}
		}

		max>max2?cout<<"YES\n":cout<<"NO\n";
	}
}
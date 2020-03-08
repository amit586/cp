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
	ll N;
	cin>>N;
	int arr[N][3];
	f(j,0,N)
	{
		ll l,max=0,min=INT_MAX,temp;
		cin>>l;
		if(l==1)
		{
			cin>>temp;
			arr[j][0]=temp;
			arr[j][1]=temp;
		}
		else
		{

			>>temp;
				if(temp>=max) max = temp;
				if(temp<=min) min = temp;
			}
			arr[j][0]=min;
			arr[j][1]=max;
		}	
	}



}

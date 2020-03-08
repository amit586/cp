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
		int n,k;
		cin>>n>>k;
		string arr[n];
		f(i,0,n)
			cin>>arr[i];

		if(n==1)
		{
			if(arr[0][0]=='1')
				cout<<0<<endl;
			else
				cout<<-1<<endl;
			continue;
		}

		int initial_pos=0,previous_pos=0,jump=0;
		while(initial_pos!=n-1 && jump<=3*n)
		{
			int i;
			for(i=min(initial_pos+k,n-1);i>=max(initial_pos-k,0)  ;i--)
			{
				if(i==initial_pos)
					 i--;
				if(arr[initial_pos][i]=='1' && arr[i][i]=='1')
					break;
			}
			//cout<<"i"<<i<<endl;
			if(arr[initial_pos][i]=='1')
			{
				initial_pos = i;
				jump++;
			}
			else
			{
				jump=-1;
				break;
			}
		}
		if(jump<3*n)
			cout<<jump<<endl;
		else
			cout<<-1<<endl;

	}
	return 0;
}

#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
			short s,w[3],k=0;
			cin>>s;
			f(i,0,3) 
			{
				cin>>w[i];
				k+=w[i];
			}
			if(w[0]==w[1] && w[1]==w[2]&& w[2]==2 && s==3)
			{
				cout<<3<<endl;
				continue;
			}
			else
							
			int res = ceil(((double)k)/s);
			cout<<res<<endl;
	}
}

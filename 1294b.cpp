#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

class coordinate
{
public:
	int x,y;
};


int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
			int n;
			cin>>n;
			coordinate arr[n+1];
			f(i,0,n)
			{
				int a,b;
				cin>>arr[i].x>>arr[i].y;
			}
			arr[n].x=0;
			arr[n].y=0;
			sort(arr,arr+n+1,[](coordinate a,coordinate b)->bool
			{
				if(a.x==b.x)
					return a.y<b.y;
				else
					return a.x<b.x;
			}
			);
			int flag=true;
			f(i,0,n)
			{
				f(j,i+1,n+1)
				{
					if(arr[j].y<arr[i].y)
						flag = false;
				}
			}
			flag?cout<<"YES\n":cout<<"NO\n";
			if(!flag) continue;

			string ans;
			for(int i=0;i<n;i++)
			{
				string sub1((arr[i+1].x-arr[i].x),'R');
				string sub2((arr[i+1].y-arr[i].y),'U'); 
				ans.append(sub1);
				ans.append(sub2);
			}
			cout<<ans<<endl; 
			
	}
	return 0;
}

#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long

class interval
{
public:
	ll index;
	ll start;
	ll end;
	bool ol;

	interval()
	{
		ol=false;
	}
};

using namespace std;

int main()
{
	fio
	int T;
	cin>>T;
	while(T--)
	{
		ll N;
		string st;
		cin>>N;
		interval arr[N];
		f(i,0,N)
		{	arr[i].index = i;
			cin>>arr[i].start>>arr[i].end;
		}
		sort(arr,arr+N,[](interval a,interval b)->bool
		{
			return a.start<b.start;
		});
 		ll s=arr[0].start,e = arr[0].end;
		
		f(i,0+1,N)
		{
			if(arr[i].start>=e)
			{
				arr[i].ol=false;
				s=arr[i].start;
				e = arr[i].end;
			}
			else
			{
				arr[i].ol=true;
				
			}
		}

		
		// cout<<"interval : \n";
		// f(i,0,N)
		// {
		// 	cout<<arr[i].index<<" "<<arr[i].start<<" "<<arr[i].end<<" "<<arr[i].ol<<endl;
		// }
		// cout<<endl;

		sort(arr,arr+N,[](interval a,interval b)->bool
		{
			return a.index<b.index;
		});

		f(i,0,N)
		{
			if(arr[i].ol==false)
			{
				st+='0';
			}
			else
			{
				st+='1';
			}

		}
		cout<<st<<endl;
	}
}
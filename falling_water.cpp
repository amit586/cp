#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

class descend
{
public:
	int i,j;
	ll sum;
	ld avg;

	descend()
	{
		i=j=sum=avg=0;
	}

};

int main()
{
	fio
	int n;
	cin>>n;
	long long arr[n];
	long double ans[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		ans[i]=arr[i];
	}

	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>=arr[i+1])
		{
			//cout<<"start : "<<i<<" ";
			while(arr[i]>=arr[i+1] && i<n-1)
				i++;
			//cout<<" end: "<<i<<endl;
			count++;
		}
	}

	descend d[count];
	int j=0;

	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>=arr[i+1])
		{
			d[j].i=i;
			while(arr[i]>=arr[i+1] && i<n-1)
			{
				d[j].sum+=arr[i];
				i++;
			}
			d[j].sum+=arr[i];
			d[j].j=i;
			d[j].avg = ((ld)d[j].sum)/( d[j].j- d[j].i + 1);
			//cout<<"d["<<j<<"] i :"<<d[j].i<<" j: "<<d[j].j<<" sum: "<<d[j].sum<<" avg: "<<d[j].avg<<endl;
			j++;
		}
	}
	j=0;
	while(j<count-1)
	{
		int k=j+1;
		while(d[j].j+1==d[k].i && d[j].avg>d[k].avg && k<count)
		{
			d[j].j=d[k].j;
			d[j].sum+=d[k].sum;
			d[j].avg=d[j].sum/(d[j].j-d[j].i+1);
			d[k].i=d[k].j=-1;
			k++;
		}
		j++;
	}

	for(int j=0;j<count;j++)
		cout<<"d["<<j<<"] i :"<<d[j].i<<" j: "<<d[j].j<<" sum: "<<d[j].sum<<" avg: "<<d[j].avg<<endl;
	cout<<count<<endl;
	for(int j=0;j<count;j++)
	{
		int x=d[j].i;
		while(x<=d[j].j && d[j].i!=-1)
		{
			ans[x]=d[j].avg;
			x++;
		}
	}
	
	cout.precision(17);
	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
	cout<<endl;

	return 0;
}

// 10
// 1 2 9 8 7 9 2 1 7 2

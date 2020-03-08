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
	int arr[n],arr_copy[n],m=0;
	f(i,0,n)
	{
		cin>>arr[i];
		arr_copy[i]=arr[i];
		if(arr[i]==0) m++;

	}

	int missing[m],remain[m],j=0;
	f(i,0,n)
	{
		if(arr[i]==0)
			{
				missing[j]=i;
				j++;
			}
		
	}
	j=0;
	sort(arr_copy,arr_copy+n);
	f(i,0,n)
	{
		if(!binary_search(arr_copy,arr_copy+n,i))
		{
			remain[j]=i+1;
			j++;
		}
	}
	cout<<"remain ";
	f(i,0,m) cout<<remain[i]<<" ";
	cout<<endl;
	cout<<"missing ";
	f(i,0,m) cout<<missing[i]<<" ";
	cout<<endl;

	///allocate///
	

}

#include<bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define endl "\n"
#define ll long long

using namespace std;

int mostFrequent(int arr[], int n) 
{ 
    // Sort the array 
    sort(arr, arr + n); 
  
    // find the max frequency using linear traversal 
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    // If last element is most frequent 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
  
    return res; 
}


int main()
{
	fio
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;	
		int arr[N];
		f(i,0,N) cin>>arr[i];

		sort(arr,arr + N);

		int most_freq = mostFrequent(arr,N);

		int moves = 0;

		f(i,0,N)
		{
			if(arr[i]!=most_freq)
				moves++;
		}
		cout<<moves<<endl;

	}
}
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
	ll n,q;
	cin>>n>>q;
	//int arr[q][2]={};
	int arr[n][2]={{}};
	ll ci,ri,i=0;
	complex <float> c1(n,q);
	cout<<real(c1)<<" "<<imag(c1)<<endl;
	cout<<"mod : "<<abs(c1)<<endl;


}

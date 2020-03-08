#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	vector <int > v1,v2;
	v1 = {1,2,3,4,5,6,7,8,9};
	v2={5,6,8};
	includes(v1.begin(),v1.end(),v2.begin(),v2.end())?cout<<"included\n":cout<<"not included\n";
}

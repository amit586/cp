#include<bits/stdc++.h>
#define PI 3.14159265359
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
    //std::cout << std::setprecision(9) << f << '\n';

	while(T--)
	{
			ll N;
			cin>>N;
			short temp=0;
			ll sum=0;;
			f(i,0,N){
				cin>>temp;
				sum+=temp;
			}

			double d = 10*PI*N;
			cout<<((double)sum)/d<<endl;
	}
}
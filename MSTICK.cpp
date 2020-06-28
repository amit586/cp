#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<queue>
#define ld long double
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define MAX 23
using namespace std;

int main(int argc, char const *argv[])
{
	fio
	int N;
	cin>>N;
	int b[N];
	for(int i=0;i<N;i++)	cin>>b[i];
	
	int lg[N+1];
	lg[0]=lg[1]=0;
	for(int i=2;i<=N;i++)
		lg[i]=lg[i/2]+1;

	int mx = lg[N]+1;
	vector<vector<int>> stMax(N+1,vector<int>(MAX,0)),stMin(N+1,vector<int>(MAX,0));
	
	for(int i=0;i<N;i++)
		stMax[i][0]=stMin[i][0]=b[i];

	for(int j=1;j<=mx;j++)
		for(int i=0;i+(1<<j) <= N;i++)
			stMax[i][j] = max(stMax[i][j-1],stMax[i+(1<<(j-1))][j-1]),
			stMin[i][j] = min(stMin[i][j-1],stMin[i+(1<<(j-1))][j-1]);


	int Q,L,R,j,jl,jr,t1,t2,t3=0,t4=0;
	cin>>Q;
	ld ans;
	while(Q--)
	{
		cin>>L>>R;
		j = lg[R-L+1];
		jl = lg[L];
		jr = lg[N-1-R];
		
		t1 = min(stMin[L][j],stMin[R-(1<<j)+1][j]);
		t2 = max(stMax[L][j],stMax[R-(1<<j)+1][j]);
		if(L>0)
			t3 = max(stMax[0][jl],stMax[L-1-(1<<jl)+1][jl]);
		else 
			t3=0;
		if(R<N-1)
			t4 = max(stMax[0][jr],stMax[N-1-(1<<jr)+1][jr]);
		else
			t4=0;
		//cout<<j<<" "<<jl<<" "<<jr<<" "<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<endl;
		ans = (ld)t1 + max((ld)(t2-t1)/2,(ld)max(t3,t4));
		cout<<ans<<endl;
		
		
	}
	return 0;
}
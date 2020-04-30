#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double

using namespace std;

void moveOne(char c, int  &x,int &y,int step,int n,int m)
{
	if(c=='L' && y>1)
		y = max(1,y-step);
	else if(c=='R')
		y = min(m,y+step);
	else if(c=='U' && x>1)
		x = max(1,x-step);
	else if(c=='D' && x<n)
		x = min(n,x+step);

	//cout<<" x: "<<x<<" y: "<<y;
}

void moveAll(char c, int arr[][2],int k,int step,int n,int m)
{
	for(int i=0;i<k;i++)
	{
		//cout<<'i'<<" -> "<<i;
		moveOne(c,arr[i][0],arr[i][1],step,n,m);
		//cout<<endl;
	}
}

int main()
{
	int n,m,k;
	cin>>n>>m>>k;

	int s[k][2];
	int f[k][2];
	for(int i=0;i<k;i++)
		cin>>s[i][0]>>s[i][1];
	for(int i=0;i<k;i++)
		cin>>f[i][0]>>f[i][1];

	//int arr[n+1][m+1];

	string ans;
	int mCount=0;
	for(int i=0;i<k;i++)
	{
		int xd = f[i][0]-s[i][0];
		int yd = f[i][1]-s[i][1];

		//cout<<"XD "<<xd<<" YD "<<yd<<endl;
		
		if(xd>0)
		{
			ans+=string(xd,'D');
			mCount+=xd;
			moveAll('D',s,k,xd,n,m);
		}
		else if(xd<0)
		{
			ans+=string(abs(xd),'U');
			mCount+=abs(xd);
			moveAll('U',s,k,abs(xd),n,m);
		}

		if(yd>0)
		{
			ans+=string(yd,'R');
			mCount+=yd;
			moveAll('R',s,k,yd,n,m);
		}
		else if(yd<0)
		{
			ans+=string(abs(yd),'L');
			mCount+=abs(yd);
			moveAll('L',s,k,abs(yd),n,m);
		}

		if(ans.size()>=2*m*n)
			break;

	}

	if(ans.size()>=2*m*n)
		cout<<-1<<endl;
	else
		cout<<ans.size()<<"\n"<<ans<<endl;
	return 0;
}

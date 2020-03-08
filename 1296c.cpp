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
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		///search ///////
		size_t found = s.find("LR");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+2<<endl;
			continue;
		}
		found = s.find("RL");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+2<<endl;
			continue;
		}
		found = s.find("UD");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+2<<endl;
			continue;
		}
		found = s.find("DU");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+2<<endl;
			continue;
		}
		found = s.find("LURD");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		found = s.find("LDRU");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		found = s.find("RULD");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		found = s.find("RDLU");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		found = s.find("ULDR");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		found = s.find("URLD");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		found = s.find("DLUR");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		found = s.find("DRUL");
		if(found!=string::npos)
		{
			cout<<found+1<<" "<<found+4<<endl;
			continue;
		}
		cout<<-1<<endl;
		
	}
	return 0;
}

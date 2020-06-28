#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second

using namespace std;

int main()
{
	fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		string s;
		cin>>s;
		int n = s.size();
		int l1,l2,l3;
		l1=l2=l3=-1;
		int ans = n;

		for(int i=0;i<n;i++)
		{
			if(l1!=-1 && l2!=-1 && l3!=-1)
			{
				ans = min(ans,i - min(l1,min(l2,l3)));
			}
			if(s[i]=='1')
				l1=i;
			else if(s[i]=='2')
				l2=i;
			else 
				l3=i;
		}	

		if(l1==-1 || l2==-1 || l3==-1)
		{
			cout<<0<<endl;
			continue;
		}
		cout<<min(ans,n-min(l1,min(l2,l3)))<<endl;	

	}
	return 0;
}

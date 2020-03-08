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
		string s;
		cin>>s;
		int len = s.length();
		int i1=0,i2=len-1;
		while(i1<len && s[i1]!='1')
			i1++;
		while(i2>=i1 && s[i2]!='1')	
			i2--;
		int zeros=0;
		//cout<<i1<<" "<<i2<<endl;
		for(int i=i1;i<=i2;i++)
		{
			if(s[i]=='0')
				zeros++;
		}
		cout<<zeros<<endl;

	}
	return 0;
}

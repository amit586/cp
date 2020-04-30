#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

bool check(int arr[],int x,int &k)
{
	for(int i=0;i<26;i++)
	{
		if(arr[i]>x && k>0)
		{
			arr[i]--;
			k--;
			return true;
		}
		else
			return false;
	}
}

int main()
{
	fio
	int TC;
	cin>>TC;
	while(TC--)
	{
		int k,x;
		string s;
		cin>>s;
		cin>>k>>x;
		int hash[26]={0};

		int n=s.size();
		int good=0;
		for(int i=0;i<s.size();i++)
		{
			hash[s[i]-'a']++;
			bool z = check(hash,x,k);
			cout<<z<<endl;
			if(z)
				good++;
			else
				break;			
		}
		cout<<good<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define f(i,j,k)  for(int i=j;i<k;i++)
#define fr(i,j,k) for(int i<=k-1;i>=j;i--)
#define ll long long
#define ld long double

using namespace std;

int main()
{
	//fio
	int n,k;
	cin>>n>>k;
	string s[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		//cout<<s[i]<<endl;
	}

	

	ll sets = 0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int l=j+1;l<n;l++)
			{
				bool flag=0;

				for(int m=0;m<k;m++)
				{
					//bool flag;
					
					if((s[i][m]==s[j][m] && s[j][m]==s[l][m] && s[l][m]==s[i][m]) || (s[i][m]!=s[j][m] && s[j][m]!=s[l][m] && s[l][m]!=s[i][m]))
					{
						flag = true;
					}
					else 
					{
						flag = false;
						break;
					}
					//cout<<i<<" "<<j<<" "<<l<<" "<<m<<" "<<flag<<endl ;

				}
				if(flag==true)
				{
					sets++;
				}
				//cout<<i<<" "<<j<<" "<<l<<" "<<endl;
			}
		}
	}

	cout<<sets<<endl;
}

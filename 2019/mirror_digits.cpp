#include<bits/stdc++.h>

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
	while(T--)
	{
		string n;
		cin>>n;

		int len = n.length();
		
		int j=0;
		for(;j<len;j++)
		{
			if(n[j]=='0')
			{
				//cout<<"false"<<endl;
				break;
			}
		}
		if(j<=len-1)
		{
			cout<<"false"<<endl;
			continue;
		}
		if(len==1)
		{
			cout<<"true"<<endl;
			continue;
		}

		bool flag;
		f(i,0,len/2)
		{	
			if(n[i]=='1'&&n[len-1-i]=='1')
			{	
				flag=true;
			}
			else if(n[i]=='2' && n[len-1-i]=='7')
			{
				flag=true;
			}
			else if(n[i]=='3' && n[len-1-i]=='8')
			{
				flag=true;
			}
			else if(n[i]=='4' && n[len-1-i]=='5')
			{
				flag=true;
			}
			else if(n[i]=='5' && n[len-1-i]=='4')
			{
				flag=true;
			}
			else if(n[i]=='6' && n[len-1-i]=='9')
			{
				flag=true;
			}
			else if(n[i]=='7' && n[len-1-i]=='2')
			{
				flag=true;
			}
			else if(n[i]=='8' && n[len-1-i]=='3')
			{
				flag=true;
			}
			else if(n[i]=='9' && n[len-1-i]=='6')
			{
			flag=true;
			}
			else 
			{
				flag=false;
			}

			if(flag==false)
			{
				break;
			}
		}

		if(flag==false)
			cout<<"false"<<endl;				
		else
			cout<<"true"<<endl;
	}
}
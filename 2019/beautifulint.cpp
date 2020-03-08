
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string a;
	cin>>a;
	string b = a;
	for(int i=k;i<n;i++)
		b[i]=b[i-k];
	if(a>b)
	{
		int j = k-1;
		while(b[j]=='9')
		{
			b[j--]='0';
			
		}
		b[j]+=1;
		for(int i=k;i<n;i++)
			b[i]=b[i-k];
	}
	cout<<n<<endl;
	cout<<b<<"\n";

}
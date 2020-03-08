#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len = s.length();
		bool zero = false, div_by_3 = false, div_by_2 =false;
		int sum=0;
		for(int i=0;i<len;i++)
		{
			sum +=(int)(s[i]-'0');
			if((int)(s[i]-'0')==0 && !zero)
			{	
				zero = true;
			}
			else if((int)(s[i]-'0')%2==0)
				div_by_2 = true;

		}
		if(sum%3==0)
			div_by_3=true;

		//cout<<"sum : "<<sum<<" zero : "<<zero<<" div_by_2 : "<<div_by_2<<" div_by_3 : "<<div_by_3<<endl;

		if(div_by_3 && div_by_2 && zero)
			cout<<"red\n";
		else if(sum==0)
			cout<<"red\n";
		else
			cout<<"cyan\n";
	}
}
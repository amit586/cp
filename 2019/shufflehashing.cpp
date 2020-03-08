
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	string p,h;
	while(T--)
	{
		cin>>p>>h;
		if(p.length()>h.length())
		{
			cout<<"NO\n";
			continue;
		}
		int flag = 0;
		sort(p.begin(),p.end());
		//cout<<" sorted p "<<p<<endl;
		for(int i=0;i<h.length()-p.length() +1;i++)
		{
			string sub_h(h,i,p.length());
			sort(sub_h.begin(),sub_h.end());
			//cout<<"sorted_sub "<<sub_h<<endl;
			if(p.compare(sub_h)==0)
			{
				flag = 1;
				break;
			} 
		}
		flag==1?cout<<"YES\n":cout<<"NO\n";
	}
}
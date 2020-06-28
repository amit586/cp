#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>
#include<set>
#include<queue>
#include <chrono>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);    
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second
using namespace std;

int parseInt(string &str)
{
	int j=str.size()-1,ans=0,p=1;
	while(str[j]>='0' && str[j]<='9')
	{
		ans+=p*(str[j]-'0');
		p*=10;
		j--;
	}
	return ans;
}

int main()
{
	//fio
	int TC;
	cin>>TC;
	//TC=1;
	while(TC--)
	{
		int A;
		string o;
		cin>>A>>o;
		string act[A];
		ll score=0;
		for(int i=0;i<A;i++)
		{
			cin>>act[i];
			if(act[i]=="CONTEST_WON")
			{
				int rank;
				cin>>rank;
				score += 300 + max(20-rank,0);
			}
			else if(act[i]=="TOP_CONTRIBUTOR")
				score+=300;
			else if(act[i].find("BUG_FOUND")!=string::npos)
			{
				int severity;
				cin>>severity;
				score+=severity;
			}
			else if(act[i]=="CONTEST_HOSTED")
				score+=50;
		}

		if(o=="INDIAN")
			cout<<score/200<<endl;
		else
			cout<<score/400<<endl;		
	}
	return 0;
}

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
	int TC;
	//cin>>TC;
	TC=1;
	while(TC--)
	{
		int n,k;
		cin>>n>>k;
		string state;
		cin>>state;
		int seconds = 0;
		bool done=false;

		vector<vector<int>> solution;
		
		while(seconds<k && !done )
		{
			int i=0;
			done=true;
			vector<int> partial_sol;
			for(;i<n-1;i++)
			{

				if(state[i]=='R' && state[i+1]=='L')
				{
					partial_sol.push_back(i+1);
					//total_moves+=1;
					state[i]='L' ;
					state[i+1]='R';
					i++;
					done=false;
				}
			}
			if(partial_sol.size()>0)
			{
				solution.push_back(partial_sol);
			}
			seconds+=1;

		}
		//cout<<seconds<<endl;
		done=true;
		int i=0;
		for(;i<n-1;i++)
			if(state[i]=='R' && state[i+1]=='L')
				done=false;
			//cout<<solution.size()<<endl;
		if(solution.size()==0 || seconds!=k || !done)
			cout<<-1<<endl;
		else
		{
			for(int i=0;i<solution.size();i++)
			{
				cout<<solution[i].size()<<" ";
				for(int j = 0;j<solution[i].size();j++)
					cout<<solution[i][j]<<" ";
				cout<<endl;
			}
		}
	}
	return 0;
}

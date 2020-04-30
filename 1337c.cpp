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
	// cin>>TC;
	TC=1;
	while(TC--)
	{
		int n,k;
		cin>>n>>k;
		vector<vector<int>> v(n);
		int x,y;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			x--,y--;
			v[x].push_back(y);
		}
		vector<int> t;
		queue<int> q;
		q.push(0);

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<v[i].size();j++)
				cout<<v[i][j]<<" ";
			cout<<endl;
		}
		// while(!q.empty())
		// {
		// 	int temp = q.front();
		// 	q.pop();
		// 	cout<<temp<<endl;
		// 	t.push_back(temp);
		// 	for(int i=0;i<v[temp].size();i++)
		// 		q.push(v[temp][i]);
		// }
				
	}
	return 0;
}

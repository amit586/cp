#include<bits/stdc++.h>
using namespace std;



void buildSegementTree(string &st,int s,int e,int *o,int *c,int *t,int i)
{
	if(s==e)
	{
		if(st[s]=='(')
			o[i]=1,c[i]=0,t[i]=0;
		else if(st[s]==')')
			o[i]=t[i]=0,c[i]=1;
		return;
	}
	int mid =(s+e)/2;
	buildSegementTree(st,s,mid,o,c,t,2*i+1);
	buildSegementTree(st,mid+1,e,o,c,t,2*i+2);
	
	int temp = min(o[2*i+1],c[2*i+2]);
	t[i]=t[2*i+1]+t[2*i+2]+temp;
	o[i]=o[2*i+1]+o[2*i+2]-temp;
	c[i]=c[2*i+1]+c[2*i+2]-temp;
}

tuple<int,int,int> query(int *o,int *c,int *t,int s,int e,int qs,int qe,int i)
{
	if(qe<s || qs>e)
		return make_tuple(0,0,0);
	else if(qs<=s &&  e<=qe)
		return make_tuple(t[i],o[i],c[i]);
	int mid = (s+e)/2;
	tuple<int,int,int> q1=query(o,c,t,s,mid,qs,qe,2*i+1),q2=query(o,c,t,mid+1,e,qs,qe,2*i+2);
	int temp = min(get<1>(q1),get<2>(q2));
	return make_tuple(get<0>(q1)+get<0>(q2)+temp,get<1>(q1)+get<1>(q2)-temp,get<2>(q1)+get<2>(q2)-temp);
}

int main(int argc, char const *argv[])
{
	int tc;
	//-cin>>tc;
	tc=1;
	while(tc--)
	{
		string s;
		cin>>s;
		int n = s.size();
		int sz = 2*(pow(2,(int)ceil(log2(n))))-1;
		int *o=new int[sz],*c=new int[sz],*t=new int[sz];
		buildSegementTree(s,0,n-1,o,c,t,0);
		int q;
		cin>>q;
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			tuple<int,int,int> ans = query(o,c,t,0,n-1,l-1,r-1,0);
			cout<<2*get<0>(ans)<<endl;
		}

	}
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

class triangles
{
public:
	int arr[3];
	void insert(int a,int b,int c);
	bool operator <(const triangles &a)const
	{
		return this->arr[0]<a.arr[0];
	}
	
};

void triangles::insert(int a,int b,int c)
{
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
	sort(arr,arr+3);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	triangles a[n];
	int x,y,z;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		a[i].insert(x,y,z);
	}
	set <triangles> s;
	// s.insert(a[0]);
	for(int i=0;i<n;i++)
	{
		s.insert(a[i]);
	}
	

	cout<<"unique trinagles: "<<s.size()<<endl;
	return 0;
}
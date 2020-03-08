#include <bits/stdc++.h>
using namespace std;

class vector_manipulator
{
public:
	vector <vector<int>> v;
	void print(void);
	void input(void);
	vector_manipulator(void)
	{
		v = {{1, 2, 3}, 
             {4, 5, 6}, 
            {7, 8, 9}};
	}

};

void vector_manipulator::input(void)
{


	// int n;
	// cout<<"enter n :  ";
	// cin>>n;
	// cout<<endl;
	// for (int i = 0; i < n; ++i)
	// {
	// 	int m;
	// 	cout<<"Enter m : ";
	// 	cin>>m;
	// 	cout<<endl;
	// 	for(int j=0;j<m;j++)
	// 	{
	// 		cin>>v[i][j];
	// 	}
	// }
}


void vector_manipulator::print(void)
{
	cout<<"vector v : ";
	for(int i=0;i<v.size();i++)
	{
		
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
}


int main(int argc, char const *argv[])
{
	vector_manipulator vect;
	//vect.input();
	vect.print();

	
	return 0;
}
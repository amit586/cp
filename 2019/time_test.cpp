#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	time_t start,end;
	double difference;
	time(&start);

	for(long long i=0;i<1000000000;i++)
	{
		int j=0;
	}
	time(&end);

	difference = difftime(end,start);
	cout<<difference<<endl;
	//cout<<time<<endl;
	tm* localTime = localtime(&end);
	cout<<localTime->tm_hour<<":";
	cout<<localTime->tm_min<<":";
	cout<<localTime->tm_sec<<endl;
	cout<<asctime(localTime)<<endl;
	cout<<FLT_RADIX<<endl;
	return 0;
}
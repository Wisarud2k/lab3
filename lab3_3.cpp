#include<iostream>
using namespace std;

int main()
{
	double count=2,sum=0;
	while(count<= 69){
		sum=sum+(1/count);
		count=count+1;
	}
	cout<<sum;
	return 0;
}
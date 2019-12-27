#include<iostream>
using namespace std;

int main()
{
	double count=6,sum=0;
	while(count<= 19){
		sum=sum+(1/count);
		count=count+1;
	}
	cout<<sum;
	return 0;
}
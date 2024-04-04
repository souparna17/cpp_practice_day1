#include<iostream>
using namespace std;
int main()
{
	int a[5]={10,20,30,40,50};
	float sum=0;float avg;
	for(int i=0;i<5;i++)
	{
		sum = sum +a[i];
		avg=sum/5;
	}
	cout<<"the avg is "<<avg<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,sum,num;
	cout<<"enter number upto which you want to find fibonacci series"<<endl;
	cin>>num;
	cout<<a<<"\t"<<b;
	for(int i=2;i<num;i++){
		sum=a+b;
		cout<<"\t"<<sum;
		a=b;
		b=sum;
	}
	
	getchar();
}

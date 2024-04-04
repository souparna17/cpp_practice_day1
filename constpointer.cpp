#include<iostream>
using namespace std;
int main()
//{
//	int a=25 ,b=35;
//	const int *ptr=&a;
//	a++;
//}

//{
//	int a=25,b=35;
//	int* const ptr=&b;
//	a++;
//	ptr = &b;
//}
{
	int a=25,b=35;
	const int*const ptr=&a;
	a++;
	ptr=&b;
	ptr=20;
}

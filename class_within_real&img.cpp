#include<iostream>
using namespace std;
class MyComplex
{
	int real,img;
	public:
		void setComplexNo(int r,int i)
		{
			real = r;
			img = i;
		}
		void display()
		{
			cout<<"complex no"<<real<<"+"<<img<<"i"<<endl;
		}
		void setReal(int r)
		{
			real=r;
			cout<<"new real is"<<real<<endl;
		}
		int getImg()
		{
			return img;
		}
	
};

int main()
{ 
 MyComplex m1;
 m1.setComplexNo(5,7);
 m1.display();
 m1.setReal(9);
 int i=m1.getImg();
 cout<<"imaginary part is"<<i<<endl;
 
 getchar();
}

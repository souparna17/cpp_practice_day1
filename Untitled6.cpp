#include<iostream>
using namespace std;
class MyComplex
{
	int real,img;
	public:
		void setComplexNo(int x,int y)
		{
			real = r;
			img = i;
		}
		void display()
		{
			cout<<"complex no"<<real<<"\t"<<img<<"i"<<endl;
		}
		void setReal(int r)
		{
			real=r;
			cout<<"new real is"<<real<<endl;
		}
		int getReal(){
			return real;
		}
		void setImg(int i){
			img=i;
			
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

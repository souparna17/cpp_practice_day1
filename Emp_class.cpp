#include<iostream>
using namespace std;
class Emp
{
	int id;
	float sal;
	public:
		void empData(int,float);
		void display();
		void setSalary(float);
		float getSalary();
};
void Emp::empData(int i,float s)
{
	id=i;
	sal=s;
}
void Emp::display()
{ 
cout<<"employee id"<<id<<"employee salary"<<sal<<endl;
}
void Emp::setSalary(float s)
{
	sal=s;
}
float Emp::getSalary()
{
	return sal;
}

int main()
{
	Emp e1;
	e1.empData(2,45000);
	e1.display(); 
	e1.setSalary(50000);
	float s=e1.getSalary();
	cout<<"new salary of employee is"<<s<<endl;
	
	getchar();
}



#include<iostream.h>
#include<conio.h>

class Data{

  public:
  int id;// global variable
  float percent, sal;


  Data(int value, float percentage){
	// initialization of variables declared in class
	id = value;
	percent = percentage;
  }
  Data(float salary){
	sal = salary;
  }
  void printId(){
	cout<<"\nId is = "<<id;
	cout<<"\nPercentage is = "<<percent;
	cout<<"\nSalary is = "<<sal;

  }

};

void main(){
	Data obj1(67000.45);// automatically call the default constructor
	Data obj2(12, 76.9);
	Data obj3(34, 54.32);

	clrscr();
	obj1.printId();
	obj2.printId();
	obj3.printId();
	getch();
}
// constructors
#include<iostream.h>
#include<conio.h>

class Data{

  public:
  int id;// global variable

  Data(){
	// initialization of variables declared in class
	id = 55;
	//rollno = 10;
  }
  void printId(){
	int rollno;// local variable
	cout<<"\nId is = "<<id;
  }

};

void main(){
	Data obj;// automatically call the default constructor
	clrscr();
	obj.printId();
	getch();
}
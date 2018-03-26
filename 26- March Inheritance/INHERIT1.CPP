//single inheritance

#include<iostream.h>
#include<conio.h>
class Parent{	// public, protected, private
 public:
	void show(){
		cout<<"\nShow inside parent class";
	}
};
class Child : public Parent{
  public:
	void input(){
		cout<<"\nInput inside child class";
	}
};
void main(){
	Child obj;
	clrscr();
	obj.input();
	obj.show();
	getch();

}
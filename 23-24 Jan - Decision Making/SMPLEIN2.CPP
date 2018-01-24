#include<iostream.h>
#include<conio.h>
// class--> data members and member functions --> object
class Sum{
   //int first, second;	// data members
//returntype --> void, int, float,char, etc
// function name --> userdefined
// no. of arguments --> ()


// data hiding -->   public, private, protected
// by defualt --> private

public:

   void result(){      // member function
	int first, second, sum;
	cout<<"Enter your first value = ";
	cin>>first;
	cout<<"Enter your second value = ";
	cin>>second;
	sum = first + second;
	cout<<"Sum is = "<<sum;

   }

};
void main(){
	Sum object1, object2;
	clrscr();
	object1.result();
	object2.result();
	getch();
}
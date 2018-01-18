//Swap of value with third variable

#include<iostream.h>
#include<conio.h>

void main(){

	int first, second, temp = 0;
	clrscr();
	cout<<"\nEnter your first value\n";
	cin>>first;

	cout<<"\nEnter your second value\n";
	cin>>second;

	//swap logic
	temp = first;  //first =  50, temp = 50, second = 100
	first = second;// first = 100, second  = 100
	second = temp; // second = 50

	cout<<"First value is = "<<first;
	cout<<"\nSecond value is = "<<second;

	getch();
}










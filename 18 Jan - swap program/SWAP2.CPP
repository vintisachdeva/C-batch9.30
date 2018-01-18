// swap without third variable

#include<conio.h>
#include<iostream.h>

void main(){

	int first, second;
	clrscr();
	//user input
	cout<<"\nEnter your first value = ";
	cin>>first;

	cout<<"\nEnter your second value = ";
	cin>>second;

	//swap logic:
	// first = 40, second = 60;
	first =  first + second;// 40 + 60 =first =  100
	second = first - second; // 100 - 60 = second = 40
	first = first - second;  // 100 - 40 = first =  60

	cout<<"\nFirst value is = " <<first;
	cout<<"\nSecond value is = "<<second;

	getch();



}
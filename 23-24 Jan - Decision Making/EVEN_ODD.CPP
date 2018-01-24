#include<iostream.h>
#include<conio.h>
void main(){

	int userValue;
	clrscr();
	cout<<"Enter a value\n";
	cin>>userValue;//10

	if(userValue % 2 == 0)
	{
	   cout<<"\nEven";
	}else{
		cout<<"\nOdd";
	}
	getch();

}
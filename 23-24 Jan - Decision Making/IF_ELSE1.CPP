#include<iostream.h>
#include<conio.h>
void main(){

	int first, second, third;
	clrscr();
	cout<<"Enter your first value\n";
	cin>>first;
	cout<<"Enter your second value\n";
	cin>>second;
	cout<<"Enter your third value\n";
	cin>>third;


	if(first>second && first>third){
	    cout<<"\nFirst value is greater";
	}else if(second>third){
		cout<<"\nSecond value is greater";
	}else{
		cout<<"\nThird value is greater";
	}
	getch();
}

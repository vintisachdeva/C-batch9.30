#include<iostream.h>
#include<conio.h>
#include<string.h>
void main(){
	// vowel or consonant
	char *userValue;
	clrscr();
	cout<<"Enter a character\n";
	cin>>userValue; // 'e'
	strlwr(userValue);
	// if(userValue == 'e')



	switch(*userValue){
		case 'a':
		//case 'A':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"vowel";
			break;

		default:
			cout<<"consonant";
			break;


	}

       getch();
}
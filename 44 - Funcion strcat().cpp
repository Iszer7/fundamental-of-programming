// A�adir o concatenar una cadena con otra - Funcion strcat()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "Esto es una cadena";
	char cad2[] = " de ejemplo";
	char cad3[30];			// va a estar cat1 y cat2 dentro de esta cadena
	
	strcpy(cad3,cad1);		//cad3 = "Esto es una cadena"
	
	strcat(cad3,cad2);		//cad3 = "Esto es una cadena de ejemplo"
	
	cout<<cad3<<endl;
	
	getch();
	return 0;
}
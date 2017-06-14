/*
	"Ejemplotipos"
	"Juan Manuel Bottarelli Frei"
	"20170614"
*/

#include <iostream>

using namespace std;

int main(){

	char option;

	cout << "Ejemplo de variables en C++" << endl << endl;
	
	cout << "Las variables en C++ son las siguientes:" << endl;

	cout << "Seleccione una opcion de las letras siguientes para ver un ejemplo:" << endl;
	cout << "B: Para variables BOOL" << endl;
	cout << "C: Para variables CHAR" << endl;
	cout << "U: Para variables UNSIGNED" << endl;
	cout << "I: Para variables INT" << endl;
	cout << "D Para variables DOUBLE" << endl;
	cout << "S: Para variables STRING" << endl << endl;
	
	cin >> option;
	
	switch(option){
		case 'b':
				cout << "BOOL: Almacena el 1 o el 0" << endl;
				break;
		case 'c':
				cout << "CHAR: Almacena caracteres" << endl;
				break;
		case 'u':
				cout << "UNSIGNED: Almacena numeros positivos y el 0" << endl;
				break;
		case 'i':
				cout << "INT: Amacena números enteros" << endl;
				break;
		case 'd':
				cout << "DOUBLE: Almacena números reales" << endl;
				break;
		case 's':
				cout << "STRING: Almacena una cadena de caracteres" << endl;
				break;
		default:
				cout << "Error al ingresar opcion" << endl;
		
	}
}

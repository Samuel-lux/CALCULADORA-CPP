#include <iostream>
using namespace std;
int main(){
	string name;
	int num1,num2,desi,suma,resta,multi;
	cout << "Ingrese su nombre: ";
	cin >> name;
	cout << "Ingrese el primer digito: ";
	cin >> num1;
	cout << "Ingrese el segundo digito: ";
	cin >> num2;
	cout << ":::Seleccione que operacion quiere realizar:::";
	cout << "1.suma";
	cout << "2.resta";
	cout << "3.resta";
	cin >> desi;
	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	if (desi==1){
		cout << "La suma es de:: " << suma;
	}
	if(desi==2){
		cout << "La resta es de:: " << resta;
	}
	if(desi==3){
		cout << "La multiplicación es de:: " << multi << endl;
	}
	return 0;
}

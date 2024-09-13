#include <iostream>
using namespace std;

int main (){
	int contador{0};
	int numero;
    cout << "Ingresa un número: ";
	cin >> numero;
	
	for(int i = 1; i<=numero; i++){
		if (numero % i == 0){
			contador ++;
		}
	}
	if (contador == 2){
		cout << "el número es primo";
	}
	else{
		cout << "El número no es primo";
	}
}
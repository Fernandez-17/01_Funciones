#include <iostream>
using namespace std;


int calcular_suma (int n){
	if (n==1){
		return 1;		
	}else{
		return n + calcular_suma(n-1);
	}
}
int main ( ){
	int numero, suma;
	cout <<"        BIENVENIDO AL PROGRMA DE CALCULO DE SUMA     " << endl;
	cout <<"Numero: ";
	cin  >> numero;
	suma = calcular_suma(numero);
	cout <<"La suma de los " << numero << " primeros numeros naturales es " << suma;

	return 0;
}
#include <iostream>
using namespace std;


int calcular_factorial (int n){
	if (n==0){
		return 1;		
	}else{
		return n*calcular_factorial(n-1);
	}
}
int main ( ){
	int numero, factorial;
	cout <<"Ingrese un numero"<< endl;
	cout <<"Numero: ";
	cin  >> numero;
	factorial = calcular_factorial(numero);
	cout <<" El factorial de " << numero << " es " << factorial;

	return 0;
}
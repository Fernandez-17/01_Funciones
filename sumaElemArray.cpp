#include <iostream>
using namespace std;


int calcular_sumElemArray(int array[ ] ,int n){
	if(n ==0){
		return array[n];
	}else{
		return array[n]+calcular_sumElemArray(array, n-1);
	}
}


int main ( ){
	int suma;
	int array[5];
	
	cout <<"   BIENVENIDO AL PROGRAMA DE CALCULO DE SUMA DE ELEMENTOS DE UN ARREGLO   " << endl;
	//cout <<"Ingrese los elemntos del arreglo"<<endl;
	for (int i = 0; i < 5; i++){
		cout <<"Elemento["<<i+1<<"]:";
		cin  >> array[i];
	}

	suma = calcular_sumElemArray(array,5);
	cout <<"La suma de los elementos del arreglo es " << suma;

	return 0;
}
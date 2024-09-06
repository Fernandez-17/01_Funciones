#include <iostream>
using namespace std;


int calcular_combinatoria(int n, int k){
	if (n==k){
		return 1;		
	} else{
		if(k==1){
			return n;
		}else{
			return calcular_combinatoria (n-1,k-1) + calcular_combinatoria (n-1,k);
		}
	}
}

int main ( ){
	int numero1, numero2 ,combinatoria;
	cout <<"        BIENVENIDO AL PROGRAMA DE CALCULO DE COMBINATORIA    " << endl;
	cout <<"Primer numero: ";
	cin  >> numero1;
	cout <<"Segundo numero: ";
	cin  >> numero2;
	combinatoria = calcular_combinatoria(numero1, numero2);
	cout <<"La combinatoira de los numeros " << numero1 <<" Y "<<numero2 << " es " << combinatoria;

	return 0;
}
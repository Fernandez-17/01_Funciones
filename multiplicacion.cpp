#include <iostream>
using namespace std;


int calcular_producto(int a, int b){
	if (b==1){
		return a;		
	}else{
		return a + calcular_producto(a,b-1);
	}
}
int main ( ){
	int multiplicador , multiplicando, producto;
	cout <<"        BIENVENIDO AL PROGRAMA DE CALCULO DE UN PRODUCTO   " << endl;
	cout <<"Multiplicando: ";
	cin  >> multiplicando;
	cout << "Multiplicador: ";
	cin  >> multiplicador;
	producto = calcular_producto(multiplicando,multiplicador);
	cout <<"El producto de " <<multiplicando << " X " << multiplicador << " es " << producto;

	return 0;
}
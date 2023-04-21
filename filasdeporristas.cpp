#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numPorri;
	int resu;
	
	cout<<"Calcular filas de porristas"<<endl;
	cout<<"Ingrese la cantidad de porristas: ";
	cin>> numPorri;
	
	for(int i=1; i<=numPorri; i++){ //se entra en el ciclo for cuando i sea menor o igual a la cantidad de porristas
		
		if(numPorri%i==0){	//entra en el condicional si el modulo entre cantidad de porrista e I es 0, eso quiere decir que es divisor
			resu = numPorri/i;	//resu representa las filas e I la cantidad de porristas.
			cout<<"Puede hacer "<<resu<<" filas de "<<i<<" porristas"<<endl;
		}
	}
	return 0;
}


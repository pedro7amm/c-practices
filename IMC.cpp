#include <iostream>
using namespace std;

const int annoActual=2023;

int main(int argc, char *argv[]) {
	string cedula, nombre;
	float peso, estatura, imc;
	int annoNac;
	

	
	//recolección de datos
	cout<<"Digite el nombre: "<<endl;
	cin>> nombre;
	cout<<"Digite el cédula: "<<endl;
	cin>> cedula;
	cout<<"Digite el peso en kilos: "<<endl;
	cin>> peso;
	cout<<"Digite el estatura en metros: "<<endl;
	cin>> estatura;
	cout<<"Digite el año de nacimiento: "<<endl;
	cin>> annoNac;
	
	
	
	
	//procesamiento de datos con el if
	if(annoActual-annoNac >= 18){

		imc= peso/ (estatura*estatura);
		if(imc < 18.5){
			cout<< nombre<<" su IMC es de "<<imc<<" por lo cual tiene infrapeso.";
		}
		else{
			if(imc <= 24.9){
				cout<< nombre<<" su IMC es de "<<imc<<" por lo cual tiene peso normal.";
			}
		   else{
				if(imc <= 29.9){
					cout<< nombre<<" su IMC es de "<<imc<<" por lo cual tiene sobrepeso.";
				}
				else{
					if(imc <= 39.9){
						cout<< nombre<<" su IMC es de "<<imc<<" por lo cual tiene obesidad.";
					}
					else{
						cout<< nombre<<" su IMC es de "<<imc<<" por lo cual tiene obesidad morbida.";
					}
				}
			}	
		}
	}
	else{
		cout<< nombre<<" es menor de edad, consulte con un médico."<<endl;
	}
	
	
	return 0;
}


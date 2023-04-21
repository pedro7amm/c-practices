#include <iostream>
using namespace std;

const int annoActual=2023;



int calcEdad(int annoNac){
	return annoActual - annoNac;
}
	
string nivelObesidad(float pes, float est){
	float imc= pes/ (est*est);
	if(imc < 18.5){
		return "infrapeso.";
	}
	else{
		if(imc <= 24.9){
			return "peso normal.";
		}
		else{
			if(imc <= 29.9){
				return "sobrepeso.";
			}
			else{
				if(imc <= 39.9){
					return "obesidad.";
				}
				else{
					return "obesidad morbida.";
				}
			}
		}	
	}
}
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
	if(calcEdad(annoNac) >= 18){
		
		cout<<cedula<<" "<<nombre<<" corresponde a: "<<nivelObesidad(peso,estatura)<<endl;
		
	}
	else{
		cout<< nombre<<" es menor de edad, consulte con un médico."<<endl;
	}
	
	
	return 0;
}


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
	float peso;
	float estatura;
	int annoNac;
	char opcion='S';
	
	
	while( opcion == 'S'){
		
		//recolección de datos
		cout<<"Digite el año de nacimiento: "<<endl;
		cin>> annoNac;
		
		//procesamiento de datos con el if
		if(annoNac != -1 && calcEdad(annoNac) >= 18){
			cout<<"Digite el nombre: "<<endl;
			cin>> nombre;
			cout<<"Digite el cédula: "<<endl;
			cin>> cedula;
			cout<<"Digite el peso en kilos: "<<endl;
			cin>> peso;
			cout<<"Digite el estatura en metros: "<<endl;
			cin>> estatura;
			cout<<cedula<<" "<<nombre<<" corresponde a: "<<nivelObesidad(peso,estatura)<<endl;
			
		}
		else{
			if(annoNac != -1){
				cout<<"Es menor de edad, consulte con un médico."<<endl;
			}
			else{
				cout<<"Ingrese un valor correcto"<<endl;
			}
			cout<<"Desea continuar? Digite S para si Y N para no"<<endl;
			cin>>opcion;
		}
	};
	return 0;
}


//CENTINELA ES UN DATO IMPOSIBLE, ALGO QUE NO PUEDE SUCEDER COMO TENER DE EDAD -1

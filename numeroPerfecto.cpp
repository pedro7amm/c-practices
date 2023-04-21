#include <iostream>
using namespace std;

int validacion(int num){
	int resu =0;
	for(int i=1; i<num; i++){ 
		if(num%i==0){	
			resu= resu+i;
			cout<<i<<endl;
		}
	}
	return resu;
}

int main(int argc, char *argv[]) {
	int num;
	
	cout<<"Número perfecto"<<endl;
	cout<<"Ingrese un número: ";
	cin>> num;
	
	if(validacion(num) == num){
		cout<<"El número "<<num<<" es perfecto.";
	}else{
		cout<<"El número "<<num<<" no es perfecto";
	}
	
	return 0;
}


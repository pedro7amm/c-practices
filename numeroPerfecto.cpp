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
	
	cout<<"N�mero perfecto"<<endl;
	cout<<"Ingrese un n�mero: ";
	cin>> num;
	
	if(validacion(num) == num){
		cout<<"El n�mero "<<num<<" es perfecto.";
	}else{
		cout<<"El n�mero "<<num<<" no es perfecto";
	}
	
	return 0;
}


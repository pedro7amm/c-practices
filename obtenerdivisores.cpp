#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//encontrar los divisores de un n�mero
	
	int n;
	
	cout<<"Divisores de un n�mero";
	cout<<"Ingrese un n�mero: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		
		if(n%i==0){
			cout<<i<<endl;
		}
		
	};
	
	
	return 0;
}


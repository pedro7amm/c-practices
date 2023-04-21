#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//encontrar los divisores de un número
	
	int n;
	
	cout<<"Divisores de un número";
	cout<<"Ingrese un número: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		
		if(n%i==0){
			cout<<i<<endl;
		}
		
	};
	
	
	return 0;
}


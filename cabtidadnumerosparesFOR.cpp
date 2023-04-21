#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cout<<"Ingrese un número: ";
	cin>> n;
	
	if(n==0){
		cout<<"No hay números pares.";
	}
	else{
		for(int i=1; i<n ; i++){
			if(i%2==0 ){
				cout<<i<<endl;
			}
		};
	}
	
	
	return 0;
}


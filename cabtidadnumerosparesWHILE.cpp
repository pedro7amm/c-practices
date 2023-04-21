#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int i=1;
	cout<<"Ingrese un número: ";
	cin>> n;
	
	if(n==0){
		cout<<"No hay números pares.";
	}
	else{
		while(i<n){
			if(i%2==0 ){
				cout<<i<<endl;
			}
			i++;
		};
	}
	
	return 0;
}


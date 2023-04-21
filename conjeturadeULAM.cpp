#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	printf("Conjetura de ULAM"); //una de las versiones viejas de C para imprimir cosas.
	cout<<endl<<"Ingrese un número: "<<endl;
	cin>>n;
	
	while(n>1){
		if(n%2==0){
			n= n/2;
			cout<<n<<endl;
		}
		else{
			n= n*3+1;
			cout<<n<<endl;
		}
	}
	return 0;
}


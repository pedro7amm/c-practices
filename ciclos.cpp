#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int con = 0;
	int numIni = 102;
	
	for( int i=102; i <= 18510;i++){
		if (numIni%2 == 0){
			con= con + 1;
		}
		numIni ++;
	};
	cout<<"hay "<<con<<" números pares entre 102 y 18510"<<endl;
	do{
		if (numIni%2 == 0){
			con= con + 1;
		}
		numIni ++;
	} while(numIni <= 18510);

	cout<<"hay "<<con<<" números pares entre 102 y 18510"<<endl;
	
	while(numIni <= 18510){
		if (numIni%2 == 0){
			con= con + 1;
		}
		numIni ++;
	};
	cout<<"hay "<<con<<" números pares entre 102 y 18510"<<endl;
	return 0;
}


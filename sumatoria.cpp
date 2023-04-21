#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int s=0;
	
	
	for(int i=2; i<=15; i++){
		s=(i+1)*((i)/((i*i)+1));
	}
	cout<<s;
	return 0;
}


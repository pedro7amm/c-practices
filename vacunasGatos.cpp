#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string namCat;
	int annoNac, resAnno;
	cout<<"Ingrese el nombre del gato: ";
	cin>> namCat;
	cout<<"Ingrese el año de macimiento del gato: ";
	cin>>annoNac;
	resAnno = 2023 - annoNac;
	
	//metodo mediante switch
	
	switch(resAnno){
	case 1:
		cout<<namCat<<" tiene "<<resAnno<<" año, por lo cual debe de ponerse la vacuna contra la Rabia."<<endl;
		break;
	case 3:
		cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Panleucopenia."<<endl;
		break;
	case 5:
		cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Rinotranqueitis."<<endl;
		break;
	case 7:
		cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Calicivirosis."<<endl;
		break;
	case 10:
		cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Peritonitis infecciosa."<<endl;
		break;
	default:
		cout<<namCat<<namCat<<" tiene "<<resAnno<<" años por lo cual no tiene que vacunarse a esta edad."<<endl;
		break;
	}
	
	
	//método mediante If
	if(resAnno == 1){
		cout<<namCat<<" tiene "<<resAnno<<" año, por lo cual debe de ponerse la vacuna contra la Rabia.";
	}
	else{
		if(resAnno == 3){
			cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Panleucopenia.";
		}
		else{
			if(resAnno == 5){
				cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Rinotranqueitis.";
			}
			else{
				if(resAnno == 7){
					cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Calicivirosis.";
				}
				else{
					if(resAnno == 10){
						cout<<namCat<<" tiene "<<resAnno<<" años, por lo cual debe de ponerse la vacuna contra la Peritonitis infecciosa.";
					}
					else{
						cout<<namCat<<namCat<<" tiene "<<resAnno<<" años por lo cual no tiene que vacunarse a esta edad.";
					}
				}
			}
		}
	} 
	
	
	return 0;
}


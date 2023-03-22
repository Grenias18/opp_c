#include <iostream>
using namespace std;

main(){
	int total=0;
	int notas[total];
	char res;
	int *p_notas = notas;
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor? (s/n): ";
		cin>>res;
	}while(res=='s'||res=='S');
	
	cout<<"----Mostrar notas----"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
		
	}
}

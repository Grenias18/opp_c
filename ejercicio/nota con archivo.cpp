#include <iostream>
#include <string>
using namespace std;
const char *nombre_archivo = "archivo.dat";
    struct Estudiante{ 
    int codigo; 
    char nombres[50]; 
    char apellidos[50]; 
    int nota1;
    int nota2; 
    int nota3;
    int nota4; 
    int promedio;
};
void Crear();
void Leer();
void Actualizar();
void Borrar();
main(){
	Leer();
	Crear();
	Borrar();
	Actualizar();
	
	system("pause");
	
	
}
void Leer(){
	system("cls");
	FILE* archivo = fopen(nombre_archivo,"rb");
	if(!archivo){
		FILE* archivo = fopen(nombre_archivo,"w+b");
	}
	Estudiante estudiante;
	int id=0;
	fread(&estudiante,sizeof(Estudiante),1,archivo);
	cout<<"________________________________________________________________________"<<endl;
	cout<<"No."<<"|"<<"ID"<<"|"<<"Nombre"<<"|"<<"Apellido"<<"|"<<"Nota 1"<<"|"<<"Nota 2"<<"|"<<"Nota 3"<<"|"<<"Nota 4"<<"|"<<"Estado"<<endl;
	do{
		cout<<id<<"  |"<<estudiante.codigo<<"|"<<estudiante.nombres<<" "<<estudiante.apellidos<<"|"<<estudiante.nota1<<"|"<<estudiante.nota2<<"|"<<estudiante.nota3<<"|"<<estudiante.nota4<<"|";
		if (estudiante.promedio <= 60){
			cout <<"Reprobo"<<endl;
		}else
		cout << "Aprobo"<<endl;
		fread(&estudiante,sizeof(Estudiante),1,archivo);
		
		id+=1;
	}while(feof(archivo)==0);
	fclose(archivo);
}
void Crear(){
	FILE* archivo = fopen(nombre_archivo,"a+b");
	char res;
	Estudiante estudiante;
	do{
		fflush(stdin);
		cout << "Ingrese los datos del estudiante"<< endl;
        cout << "ID: ";
        cin >> estudiante.codigo;
        cin.ignore();
        
        cout << "Nombre: ";
        cin.getline(estudiante.nombres,50);
        cout << "Apellido: ";
        cin.getline(estudiante.apellidos,50);
        cout << "Nota 1: ";
        cin >> estudiante.nota1;
        cout << "Nota 2: ";
        cin >> estudiante.nota2;
        cout << "Nota 3: ";
        cin >> estudiante.nota3;
        cout << "Nota 4: ";
        cin >> estudiante.nota4;
		estudiante.promedio= (estudiante.nota1+estudiante.nota2+estudiante.nota3+estudiante.nota4)/4;
		if (estudiante.promedio <= 60){
			cout <<"Reprobo"<<endl;
		}else
		cout << "Aprobo"<<endl;
		
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		
		cout<<"Desea ingresar otro estudiante? (s/n): ";
		cin>>res;
	}while(res=='s'||res=='S');
	
	
	
	fclose(archivo);
		Leer();
}

void Actualizar(){
	
	FILE* archivo = fopen(nombre_archivo,"r+b");
	Estudiante estudiante;
    int id=0;
    cout<<"Ingrese el No. que desea modificar: ";
    cin>>id;
    fseek(archivo,id * sizeof(Estudiante),SEEK_SET);
		cout<<"Ingrese ID: ";
		cin>>estudiante.codigo;
		cin.ignore();
		
		cout<<"Ingrese Nombres: ";
		cin.getline(estudiante.nombres,50);
		cout<<"Ingrese Apellidos: ";
		cin.getline(estudiante.apellidos,50);
		cout << "Nota 1: ";
        cin >> estudiante.nota1;
        cout << "Nota 2: ";
        cin >> estudiante.nota2;
        cout << "Nota 3: ";
        cin >> estudiante.nota3;
        cout << "Nota 4: ";
        cin >> estudiante.nota4;
		estudiante.promedio= (estudiante.nota1+estudiante.nota2+estudiante.nota3+estudiante.nota4)/4;
		if (estudiante.promedio <= 60){
			cout <<"Reprobo"<<endl;
		}else
		cout << "Aprobo"<<endl;
		
		
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);

	
	
	
	fclose(archivo);
	Leer();
}
void Borrar(){
	const char *nombre_archivo_temp = "archivo_temp.dat";
	FILE* archivo = fopen(nombre_archivo,"rb");
	FILE* archivo_temp = fopen(nombre_archivo_temp,"w+b");
	Estudiante estudiante;
	int id=0,id_n=0;
	cout<<"Ingrese el No. a Eliminar: ";
	cin>>id;
	while(fread(&estudiante,sizeof(Estudiante),1,archivo)){
		if (id_n!=id){
			fwrite(&estudiante,sizeof(Estudiante),1,archivo_temp);
		}
		id_n++;
	}
	fclose(archivo);
	fclose(archivo_temp);
	
	archivo = fopen(nombre_archivo,"wb");
	archivo_temp = fopen(nombre_archivo_temp,"rb");
	while(fread(&estudiante,sizeof(Estudiante),1,archivo_temp)){
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
	}
	fclose(archivo);
	fclose(archivo_temp);
	Leer();
		
}

#include "persona.cpp"
#include <iostream>

using namespace std;

class Propietario: persona {
  private: string nit;
  private: double cui;

  public: Propietario() {}
  Propietario(double c, string n, string nom, string ape, string dir,string fna, int tel): persona(nom, ape, dir,fna,tel) {
    nit = n;
    cui = c;
  }
  void setNit(string n){nit = n;}
  void setCui(double c){cui = c;}
  void setNombre(string nom){ nombres = nom;}
  void setApellido(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFena(string fna){fena = fna;}
  void setTelefono(int tel){telefono = tel;}
  string getNit(){ return nit;}
  double getCui(){ return cui;}
  string getNombre(){ return nombres;}
  string getApellido(){ return apellidos;}
  string getDireccion(){ return direccion;}
  string getFena(){ return fena;}
  int getTelefono(){ return telefono ;}

  void mostrar(){
      cout << "__________________________________________" << endl;
      cout << nit << ", " << cui << ", " << nombres<< ", " <<apellidos<< ", " <<direccion<< ", " <<fena<< ", " <<telefono<<endl;
    }
  void agregar(){
  	cout << "Datos agregados correctamente"<< endl;
  }
};

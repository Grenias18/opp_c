#include "personas1.cpp"
#include <iostream>

using namespace std;

class Cliente: persona {
  private: string nit;
  public: Cliente() {}
  Cliente(string nom, string ape, string dir,string fna, int tel, string n): persona(nom, ape, dir,fna, tel) {
    nit = n;
  }
  void setNit(string n){nit = n;}
  void setNombre(string nom){ nombres = nom;}
  void setApellido(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setfecha_nacimineto(string fna){direccion = fna;}
  void setTelefono(int tel){telefono = tel;}
  string getNit(){ return nit;}
  string getNombre(){ return nombres;}
  string getApellido(){ return apellidos;}
  string getDireccion(){ return direccion;}
  int getTelefono(){ return telefono ;}

  void mostrar(){
      cout << "__________________________________________" << endl;
      cout << nit << ", " <<nombres<< ", " <<apellidos<< ", " <<direccion<< ", " <<telefono<<endl;
    }
};


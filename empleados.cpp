#include "personas1.cpp"
#include <iostream>

using namespace std;

class Empleado: persona {
  private: string codigo, puesto;

  public: Empleado() {}
  Empleado(string nom, string ape, string dir, string fna, string cod, string pue, int tel): persona(nom, ape, dir, fna, tel) {
    codigo = cod;
    puesto = pue;
  }
  void setcodigo(string cod){codigo = cod;}
  void setpuesto(string pue){puesto = pue;}
  void setNombre(string nom){ nombres = nom;}
  void setApellido(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setfecha_nacimiento(string fna){fecha_nacimiento = fna;}
  void setTelefono(int tel){telefono = tel;}
  string getcodigo(){ return codigo;}
  string getpuesto(){ return puesto;}
  string getNombre(){ return nombres;}
  string getApellido(){ return apellidos;}
  string getDireccion(){ return direccion;}
  string getfecha_nacimiento(){ return fecha_nacimiento;}
  int getTelefono(){ return telefono ;}

  void mostrar(){
      cout << "__________________________________________" << endl;
      cout << codigo << ", "<< puesto << ", " <<nombres<< ", " <<apellidos<< ", " <<direccion<< ", " <<fecha_nacimiento<< ", " <<telefono<<endl;
    }
};

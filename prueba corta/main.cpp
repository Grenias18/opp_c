#include <iostream>
#include "Propietario.cpp"

using namespace std;

int main() {
  string nit, nombres, apellidos, direccion, fena;
  int telefono;
  double cui;
  
  cout << "Ingresar Nit: ";
  cin >> nit;
  cout << "Ingresar Cui: ";
  cin >> cui;
  cout << "Ingresar Nombres: ";
  cin >> nombres;
  cout << "Ingresar Apellidos: ";
  cin >> apellidos;
  cout << "Ingresar Direccion: ";
  cin >> direccion;
  cout << "Ingresar Fecha de nacimiento: ";
  cin >> fena;
  cout << "Ingresar telefono: ";
  cin >> telefono;


  Propietario obj =Propietario(cui,nit,nombres,apellidos,direccion,fena,telefono);
  obj.mostrar();

  cout<<"Ingresar NIT: ";
  cin>> nit;
  obj.setNit(nit);
  cout<<"Ingresar CUI: ";
  cin>> cui;
  obj.setCui(cui);
  obj.mostrar();
 
}


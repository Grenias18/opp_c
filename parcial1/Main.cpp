#include <iostream>
#include "Propietario.cpp"

using namespace std;

int main() {
  string nit, nombres, apellidos, direccion, fena;
  int telefono;
  double cui;
  
  cout << "Ingrese NIT: ";
  cin >> nit;
  cout << "Ingrese CUI: ";
  cin >> cui;
  cout << "Ingrese Nombres: ";
  cin >> nombres;
  cout << "Ingrese Apellidos: ";
  cin >> apellidos;
  cout << "Ingrese Direccion: ";
  cin >> direccion;
  cout << "Ingrese Fecha de nacimiento: ";
  cin >> fena;
  cout << "Ingrese Telefono: ";
  cin >> telefono;


  Propietario obj =Propietario(cui,nit,nombres,apellidos,direccion,fena,telefono);
  obj.mostrar();
  obj.agregar();
}




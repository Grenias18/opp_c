#include <iostream>
#include "cliente.cpp"

using namespace std;

int main() {
  string nit, nombres, apellidos, direccion;
  int telefono;

  cout << "Ingresar Nit: ";
  cin >> nit;
  cout << "Ingresar Nombres: ";
  cin >> nombres;
  cout << "Ingresar Apellidos: ";
  cin >> apellidos;
  cout << "Ingresar Direccion: ";
  cin >> direccion;
  cout << "Ingresar telefono: ";
  cin >> telefono;

  Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
  obj.mostrar();

  cout<<"Ingresar NIT: ";
  cin>> nit;
  obj.setNit(nit);
  obj.mostrar();
 
}


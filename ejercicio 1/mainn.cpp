#include <iostream>
#include "clientes.cpp"
#include "empleados.cpp"

using namespace std;

int main() {
  string codigo, puesto, nit, nombres, apellidos, direccion, fecha_nacimiento;
  int telefono,i;
  
  cout << "Seleccione una opcion";
  cout << "1. Empleado";
  cout << "2. Cliente";
  cin >> i;
  cout << "Ingresar nit: ";
  cin >> nit;
  cout << "Ingresar codigo: ";
  cin >> codigo;
  cout << "Ingresar puesto: ";
  cin >> puesto;
  cout << "Ingresar Nombres: ";
  cin >> nombres;
  cout << "Ingresar Apellidos: ";
  cin >> apellidos;
  cout << "Ingresar Direccion: ";
  cin >> direccion;
  cout << "Ingresar telefono: ";
  cin >> telefono;
  
  if (i = 1){
  
  Cliente obj = Cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit);
  obj.mostrar();

  cout<<"Ingresar NIT: ";
  cin>> nit;
  obj.setNit(nit);
  obj.mostrar();
 
  Empleado obj = Empleado(codigo,puesto,nombres,apellidos,direccion,fecha_nacimiento,telefono);
  obj.mostrar();
  }
  
  if (i=2){
  
  cout<<"Ingresar Codigo: ";
  cin>> codigo;
  cout<<"Ingresar Puesto: ";
  cin>> puesto;
  obj.setcodigo(codigo);
  obj.mostrar();
  obj.setpuesto(puesto);
  obj.mostrar();
  }
}


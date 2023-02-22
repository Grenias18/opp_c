#include <iostream>

using namespace std;
class persona {
  protected: string nombres,apellidos, direccion,fecha_nacimiento;
  int telefono;
  protected: persona() {

  }
  persona(string nom, string ape, string dir, string fna, int tel) {
    nombres = nom;
    apellidos = ape;
    direccion = dir;
    fecha_nacimiento = fna;
    telefono = tel;
  }

  void mostrar();
};

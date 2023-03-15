#include <iostream>

using namespace std;
class persona {
  protected: string nombres,apellidos, direccion,fena;
  int telefono;
  protected: persona() {

  }
  persona(string nom, string ape, string dir, string fna, int tel) {
    nombres = nom;
    apellidos = ape;
    direccion = dir;
    fena = fna;
    telefono = tel;
  }

  void mostrar();
  void agregar();
};

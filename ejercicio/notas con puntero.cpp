#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    int id;
    string nombres;
    string apellidos;
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float promedio;
};

void calcular_promedio(Estudiante* estudiante) {
    estudiante->promedio = (estudiante->nota1 + estudiante->nota2 + estudiante->nota3 + estudiante->nota4) / 4;
}

void imprimir_estado(Estudiante* estudiante) {
    if (estudiante->promedio >= 60) {
        cout << "El estudiante " << estudiante->nombres << " " << estudiante->apellidos << " aprobo." << endl;
    } else {
        cout << "El estudiante " << estudiante->nombres << " " << estudiante->apellidos << " reprobo." << endl;
    }
}

int main() {
    int n_estudiantes;

    cout << "Ingrese el número de estudiantes: ";
    cin >> n_estudiantes;

    Estudiante* estudiantes = new Estudiante[n_estudiantes];

    for (int i = 0; i < n_estudiantes; i++) {
        cout << "Ingrese los datos del estudiante " << i + 1 << endl;
        cout << "ID: ";
        cin >> estudiantes[i].id;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombres;
        cout << "Apellido: ";
        cin >> estudiantes[i].apellidos;
        cout << "Nota 1: ";
        cin >> estudiantes[i].nota1;
        cout << "Nota 2: ";
        cin >> estudiantes[i].nota2;
        cout << "Nota 3: ";
        cin >> estudiantes[i].nota3;
        cout << "Nota 4: ";
        cin >> estudiantes[i].nota4;

        calcular_promedio(&estudiantes[i]);

        imprimir_estado(&estudiantes[i]);
    }

    return 0;
}

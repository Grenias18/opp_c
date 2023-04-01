#include <iostream>
#include <string>

using namespace std;

int main() {
    const int estumax = 100;
    int n_estudiantes; 
    int id[estumax]; 
    string nombres[estumax]; 
    string apellidos[estumax]; 
    float nota1[estumax];
    float nota2[estumax]; 
    float nota3[estumax];
    float nota4[estumax]; 
    float promedio[estumax];

    cout << "Ingrese el número de estudiantes: ";
    cin >> n_estudiantes;

    for (int i = 0; i < n_estudiantes; i++) {
        cout << "Ingrese los datos del estudiante " << i + 1 << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Nombre: ";
        cin >> nombres[i];
        cout << "Apellido: ";
        cin >> apellidos[i];
        cout << "Nota 1: ";
        cin >> nota1[i];
        cout << "Nota 2: ";
        cin >> nota2[i];
        cout << "Nota 3: ";
        cin >> nota3[i];
        cout << "Nota 4: ";
        cin >> nota4[i];

        promedio[i] = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4;

        if (promedio[i] >= 60) {
            cout << "El estudiante " << nombres[i] << " " << apellidos[i] << " aprobo." << endl;
        } else {
            cout << "El estudiante " << nombres[i] << " " << apellidos[i] << " reprobo." << endl;
        }
    }

    return 0;
}

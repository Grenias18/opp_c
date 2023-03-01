#include <iostream>

using namespace std;

int main() {
    int pais;

    cout << "Ingrese el codigo de area";
   
    
    cin >> pais;

    switch(pais) {
        case 501:
            cout << "Belice";
            break;
        case 506:
            cout << "Costa Rica";
            break;
        case 503:
            cout << "El Salvador";
            break;
        case 502:
            cout << "Guatemala";
            break;
        case 504:
            cout << "Honduras";
            break;
        case 505:
            cout << "Nicaragua";
            break;
        case 507:
            cout << "Panama";
            break;
        default:
            cout << "El número de país ingresado no es válido.\n";
            break;
    }

    return 0;
}

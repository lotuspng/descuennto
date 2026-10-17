// esta invencion infernal se supone que deberia calcular en base al total para verificar si es valido para un descuento

#include <iostream>
using namespace std;
int main() {
    cout << "introduce el precio del producto ";
    double  precio;
    double descuento = 0;
    cin >> precio;
    if (precio > 5000) {
        descuento = precio * 0.10;
        cout << "tu descuento es: $" << descuento;
    }
    else if (precio >= 3000) {
        descuento = precio * 0.08;
        cout << "tu descuento es: $" << descuento;
    }
    else {
        cout << "Descuento no aplica";
    }


    return 0;
}
#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int codigo, mes, pasajes, codigoanterior;
    float total;

    // B
    float totaldest;

    cout << "C�digo de destino: ";
    cin >> codigo;

    while (codigo != 0) {
        codigoanterior = codigo;
        totaldest = 0;
        while (codigo == codigoanterior) {
            cout << "Mes: ";
            cin >> mes;
            cout << "Pasajes vendidos: ";
            cin >> pasajes;
            cout << "Recaudado: $";
            cin >> total;
            cout << "--------------" << endl;
            totaldest += total;
            cout << "C�digo de destino: ";
            cin >> codigo;
        }
        cout << "Recaudaci�n destino " << codigoanterior << ": $";
        cout << totaldest;
    }


    return 0;
}

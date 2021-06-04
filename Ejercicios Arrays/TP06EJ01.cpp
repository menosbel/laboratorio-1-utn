#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int total = 10;
    int numeros[total] = {}, i;

    for (i=0; i<total; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    cout << "Números positivos: ";
    for (i=0; i<total; i++) {
        if (numeros[i] > 0) {
            cout << numeros[i] << endl;
        }
    }


    return 0;
}

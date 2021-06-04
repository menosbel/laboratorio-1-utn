#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int costo=500, numero, primer_premio=30000, segundo_premio=5000;
    bool numeros[100][1] = {};
    int i, total_recaudado=0, ganancia=0, contador=0;
    float porcentaje_no_vendido=0;
    int random_num = rand() % 99, random_num_2 = rand() % 99;

    cout << "Numero: ";
    cin >> numero;

    while (numero != -1) {
        if (numeros[numero][0]) {
            cout << "El " << numero << " ya ha sido comprado." << endl;
        } else {
            numeros[numero][0] = true;
        }

        cout << endl;
        cout << "Numero: ";
        cin >> numero;
    }

    for (i=0; i<100; i++) {
        if (numeros[i][0]) {
            contador ++;
        }
    }

    total_recaudado = contador * 500;
    porcentaje_no_vendido = (99-contador) * 100 / 99;
    cout << "Porcentaje de n�meros no vendidos: " << porcentaje_no_vendido << "%" << endl;

    ganancia = total_recaudado - primer_premio - segundo_premio;
    cout << "Ganancia del due�o: " << ganancia << endl;

    cout << "N�mero ganador del primer premio: " << random_num << endl;
    cout << "N�mero ganador del segundo premio: " << random_num_2 << endl;

    if (numeros[random_num][0]) {
        cout << "El n�mero " << random_num << " ha sido vendido." << endl;
    } else {
        cout << "El n�mero " << random_num << " no ha sido vendido." << endl;
    }

    if (numeros[random_num_2][0]) {
        cout << "El n�mero " << random_num_2 << " ha sido vendido." << endl;
    } else {
        cout << "El n�mero " << random_num_2 << " no ha sido vendido." << endl;
    }



    return 0;
}

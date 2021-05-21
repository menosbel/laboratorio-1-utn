#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
    int i, codigo_pescador=1, codigo_pescador_old, hora, codigo_especie, carnada;
    float peso_pez, porcentaje_viva, porcentaje_senuelo, porcentaje_mosca, pez_menos_pesado;
    int total_capturas=5, total_viva, total_senuelo, total_mosca, sin_mosca=0, codigo_pez_menos_pesado, capturas_franja_horaria=0;


    while (codigo_pescador != 0) {

        cout << "Ingrese el código del pescador: ";
        cin >> codigo_pescador;

        total_viva=0, total_senuelo=0, total_mosca=0;

        for (i=1; i<=5; i++) {
            cout << endl;
            cout << "Captura número " << i << endl;
            cout << "Hora: ";
            cin >> hora;
            cout << "Código de especie: ";
            cin >> codigo_especie;
            cout << "Tipo de carnada (1 - Carnada viva, 2 - Señuelo, 3 - Mosca): ";
            cin >> carnada;
            cout << "Peso del pez: ";
            cin >> peso_pez;

            if (carnada == 1) {
                total_viva ++;
                if (hora >= 13 && hora <= 19) {
                    capturas_franja_horaria++;
                }
            } else if (carnada == 2) {
                total_senuelo ++;
            } else if (carnada == 3) {
                total_mosca ++;
            } else {
                cout << "El código de la carnada es incorrecto." << endl;
            }

            if (i == 1) {
                pez_menos_pesado = peso_pez;
                codigo_pez_menos_pesado = codigo_especie;
            } else if (peso_pez < pez_menos_pesado) {
                pez_menos_pesado = peso_pez;
                codigo_pez_menos_pesado = codigo_especie;
            }
        }

        if (total_mosca == 0) {
            sin_mosca ++;
        }

        porcentaje_viva = total_viva * 100 / total_capturas;
        porcentaje_senuelo = total_senuelo * 100 / total_capturas;
        porcentaje_mosca = total_mosca * 100 / total_capturas;

        cout << endl;
        cout << "El pescador " << codigo_pescador << " capturó " << porcentaje_viva << "% con carnada viva, " << porcentaje_senuelo << "% con señuelo y " << porcentaje_mosca << "% con mosca." << endl;
        cout << endl;
        cout << "Ingrese 0 para detener la carga de datos o 1 para continuar: " << endl;
        cin >> codigo_pescador;
    }
    cout << endl;
    cout << "Cantidad de pescadores que no capturaron ningún pez con mosca: " << sin_mosca << endl;
    cout << "El pez menos pesado fue el " << codigo_pez_menos_pesado << ". Pesó " << pez_menos_pesado << "kg." << endl;
    cout << "Entre las 13 y las 19 se capturaron " << capturas_franja_horaria << " peces utilizando carnada viva." << endl;

	return 0;
}

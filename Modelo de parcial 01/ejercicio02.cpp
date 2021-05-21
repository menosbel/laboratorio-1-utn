#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
    int primer_dado, segundo_dado, tercer_dado, suma_dados, puntaje;
    cin >> primer_dado;
    cin >> segundo_dado;
    cin >> tercer_dado;

    suma_dados = primer_dado + segundo_dado + tercer_dado;

    if (suma_dados >= 3 && suma_dados <= 6 || suma_dados >= 15 && suma_dados <= 18) {
        puntaje = 0;
    } else if (suma_dados >= 7 && suma_dados <= 14){
        puntaje = suma_dados;
    }

    cout << "Puntaje: " << puntaje;

	return 0;
}

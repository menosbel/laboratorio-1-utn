#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    char color, sexo;
    int edad, mat_color_decada[10][4], mat_color_sexo[2][4];
    int color_indice,

    //N=0, A=1, B=2, O=3

    cout << "Edad: ";
    cin >> edad;

    while (edad != 0) {
        cout << "Sexo (M/F): ";
        cin >> sexo;
        cout << "Color (N, A, B, O): ";
        cin >> color;

        switch(color) {
        case N:

        }


        cout << "Edad: ";
        cin >> edad;
    }

    return 0;
}

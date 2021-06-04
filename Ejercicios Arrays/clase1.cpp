// VECTORES Y MATRICES
/*

*/

#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int valor, valor_1, valor_2;
    int vec[100] = {}; // inician todos en cero

    for (i=0; i<100; i++) {
        vec[i] = 1;
    }

    int mi_matriz[12][31]; // filas x columnas
    float mi_otra_matriz[12][5][10];// filas, columnas, caras

    int mat[8][3] = {}; // 0 a 7, 0 a 2
    mat[5][2] = 10;
    cin >> mat[2][1];
    cout << mat[6][0];

    return 0;
}

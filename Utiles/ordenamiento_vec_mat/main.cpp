#include <iostream>
using namespace std;
#include <cstring>

const int CANT_REG = 5;

void establecerDatos(char [CANT_REG][30], int*, float*);
void ordenarDatos_x_Edad(char [CANT_REG][30], int*, float*);
void ordenarDatos_x_Sueldo(char [CANT_REG][30], int*, float*);
void ordenarDatos_x_Nombre(char [CANT_REG][30], int*, float*);
void mostrar(char [CANT_REG][30], int*, float*);

int main(){
  char mNombres[CANT_REG][30];
  int vEdad[CANT_REG];
  float vSueldo[CANT_REG];

  establecerDatos(mNombres, vEdad, vSueldo);

  cout << endl << "ANTES DE ORDENAR" << endl;
  mostrar(mNombres, vEdad, vSueldo);

  ordenarDatos_x_Edad(mNombres, vEdad, vSueldo);

  cout << endl <<endl << "ORDENADO POR EDAD" << endl;
  mostrar(mNombres, vEdad, vSueldo);

  ordenarDatos_x_Sueldo(mNombres, vEdad, vSueldo);

  cout << endl <<endl << "ORDENADO POR SUELDO" << endl;
  mostrar(mNombres, vEdad, vSueldo);

  ordenarDatos_x_Nombre(mNombres, vEdad, vSueldo);
  cout << endl <<endl << "ORDENADO POR NOMBRE" << endl;
  mostrar(mNombres, vEdad, vSueldo);

  return 0;
}

void establecerDatos(char mNom[CANT_REG][30], int *vEdad, float *vSueldo){
  strcpy(mNom[0], "Juan Perez");
  vEdad[0] = 21;
  vSueldo[0] = 3500;

  strcpy(mNom[1], "Cecilia Gomez");
  vEdad[1] = 21;
  vSueldo[1] = 3700;

  strcpy(mNom[2], "Carolina Gonzalez");
  vEdad[2] = 25;
  vSueldo[2] = 2700;

  strcpy(mNom[3], "Pablo Pereira");
  vEdad[3] = 38;
  vSueldo[3] = 6700;

  strcpy(mNom[4], "Leandro Gado");
  vEdad[4] = 27;
  vSueldo[4] = 4700;
}

void mostrar(char mNom[CANT_REG][30], int *vEdad, float *vSueldo){
  int i;
  for(i=0; i<CANT_REG; i++){
    cout << "NOMBRE: " << mNom[i] << endl;
    cout << "EDAD  : " << vEdad[i] << " años" << endl;
    cout << "SUELDO: $ " << vSueldo[i] << endl << endl;
  }
}

void ordenarDatos_x_Edad(char mNom[CANT_REG][30], int *vEdad, float *vSueldo){
  int i, j, pos;
  //Se recorren todos los registros menos el último
  for(i=0; i<CANT_REG-1; i++){
    //Asumimos que la posición actual es la del mayor/menor.
    pos = i;
    //Se recorren todas las posiciones desde la actual (osea i) en adelante. Se busca no repetir posiciones ya ordenadas
    //por lo que a medida que avanza el primer for, las vueltas serán menores.
    for(j=i+1; j<CANT_REG; j++){
      //Se evalúa si el valor buscado en la posición j es mayor a la posición asumida como mayor/menor
      if(vEdad[j] >= vEdad[pos]){
        //Actualizamos el valor de la posición del mayor/menor
        pos = j;
      }
    }

    //Aquí se deberá intercambiar la fila de i por la fila de pos (ya que en pos quedó el valor mayor/menor)
    //Declaramos variables auxiliares para cada dato a intercambiar
    int edadAux;
    float sueldoAux;
    char nombreAux[30];
    //Intercambio de edad
    edadAux = vEdad[i]; //Me guardo el valor del vector en la posición i
    vEdad[i] = vEdad[pos]; //Piso el valor del vector en la posición i por el de la posición pos (mayor/menor valor)
    vEdad[pos] = edadAux; //Piso el valor del vector en la posición pos por el de la posición i
    //Intercambio de sueldo
    sueldoAux = vSueldo[i]; //Idem al caso de Edad
    vSueldo[i] = vSueldo[pos];
    vSueldo[pos] = sueldoAux;
    //Intercambio del nombre
    strcpy(nombreAux, mNom[i]); //Idem al caso de Edad y Sueldo pero utilizando strcpy porque son cadenas
    strcpy(mNom[i], mNom[pos]);
    strcpy(mNom[pos], nombreAux);
  }

  //En este caso, al ordenar por la columna edad es necesario ordenar también el sueldo y el nombre. Para que haya consistencia
  //en los datos.
}

void ordenarDatos_x_Sueldo(char mNom[CANT_REG][30], int *vEdad, float *vSueldo){
  int i, j, pos;
  for(i=0; i<CANT_REG-1; i++){
    //Asumimos que la posición actual es la del mayor/menor.
    pos = i;
    //Se recorren todas las posiciones desde la actual (osea i) en adelante. Se busca no repetir posiciones ya ordenadas
    //por lo que a medida que avanza el primer for, las vueltas serán menores.
    for(j=i+1; j<CANT_REG; j++){
      //Se evalúa si el valor buscado en la posición j es mayor a la posición asumida como mayor/menor
      if(vSueldo[j] >= vSueldo[pos]){
        //Actualizamos el valor de la posición del mayor/menor
        pos = j;
      }
    }

    //Aquí se deberá intercambiar la fila de i por la fila de pos (ya que en pos quedó el valor mayor/menor)
    //Declaramos variables auxiliares para cada dato a intercambiar
    int edadAux;
    float sueldoAux;
    char nombreAux[30];
    //Intercambio de edad
    edadAux = vEdad[i]; //Me guardo el valor del vector en la posición i
    vEdad[i] = vEdad[pos]; //Piso el valor del vector en la posición i por el de la posición pos (mayor/menor valor)
    vEdad[pos] = edadAux; //Piso el valor del vector en la posición pos por el de la posición i
    //Intercambio de sueldo
    sueldoAux = vSueldo[i]; //Idem al caso de Edad
    vSueldo[i] = vSueldo[pos];
    vSueldo[pos] = sueldoAux;
    //Intercambio del nombre
    strcpy(nombreAux, mNom[i]); //Idem al caso de Edad y Sueldo pero utilizando strcpy porque son cadenas
    strcpy(mNom[i], mNom[pos]);
    strcpy(mNom[pos], nombreAux);
  }

  //En este caso, al ordenar por la columna sueldo es necesario ordenar también el sueldo y el nombre. Para que haya consistencia
  //en los datos.
}

void ordenarDatos_x_Nombre(char mNom[CANT_REG][30], int *vEdad, float *vSueldo){
  int i, j, pos;
  //Se recorren todos los registros menos el último
  for(i=0; i<CANT_REG-1; i++){
    //Asumimos que la posición actual es la del mayor/menor.
    pos = i;
    //Se recorren todas las posiciones desde la actual (osea i) en adelante. Se busca no repetir posiciones ya ordenadas
    //por lo que a medida que avanza el primer for, las vueltas serán menores.
    for(j=i+1; j<CANT_REG; j++){
      //Se evalúa si el valor buscado en la posición j es mayor a la posición asumida como mayor/menor
      if(strcmp(mNom[j], mNom[pos]) >= 0){ //Se utiliza strcmp porque son cadenas. Equivale a un hipotético if(mNom[j] > mNom[pos])
        //Actualizamos el valor de la posición del mayor/menor
        pos = j;
      }
    }

    //Aquí se deberá intercambiar la fila de i por la fila de pos (ya que en pos quedó el valor mayor/menor)
    //Declaramos variables auxiliares para cada dato a intercambiar
    int edadAux;
    float sueldoAux;
    char nombreAux[30];
    //Intercambio de edad
    edadAux = vEdad[i]; //Me guardo el valor del vector en la posición i
    vEdad[i] = vEdad[pos]; //Piso el valor del vector en la posición i por el de la posición pos (mayor/menor valor)
    vEdad[pos] = edadAux; //Piso el valor del vector en la posición pos por el de la posición i
    //Intercambio de sueldo
    sueldoAux = vSueldo[i]; //Idem al caso de Edad
    vSueldo[i] = vSueldo[pos];
    vSueldo[pos] = sueldoAux;
    //Intercambio del nombre
    strcpy(nombreAux, mNom[i]); //Idem al caso de Edad y Sueldo pero utilizando strcpy porque son cadenas
    strcpy(mNom[i], mNom[pos]);
    strcpy(mNom[pos], nombreAux);
  }

  //En este caso, al ordenar por la columna nombre es necesario ordenar también el sueldo y el nombre. Para que haya consistencia
  //en los datos.
}


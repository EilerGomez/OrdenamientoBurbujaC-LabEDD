#include <iostream>
using namespace std;

void imprimirListado(int lista[5]){
    for (int  i= 0;  i< 5; i++) {
        cout<<lista[i]<<endl;
    }
}

//complejidad = 0(n * m) donde n= tamaño y m = tamaño-1;
void ordenamientoBurbuja(int lista[5]){
    int tamano=5;
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano-1; ++j) {
            if(lista[j]>lista[j+1]){
                int aux = lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=aux;
            }
        }
    }

    imprimirListado(lista);

}
int main() {
    int lista[5];
    lista[0]=4;
    lista[1]=8;
    lista[2]=7;
    lista[3]=1;
    lista[4]=10;
    ordenamientoBurbuja(lista);
    return 0;
}






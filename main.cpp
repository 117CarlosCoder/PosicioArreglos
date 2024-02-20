#include <iostream>

void posicion(int indices[], int tamanios[], int tamanoIndices, int tamanoArrays){
    int posicion=0;

    std::cout << "Indices: ";

    for (int i = tamanoIndices-1; i >= 0; --i) {
        std::cout << indices[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Tamanos: ";

    for (int i = tamanoArrays-1;  i >= 0; --i) {
        std::cout << tamanios[i] << " ";
    }

    std::cout << std::endl;

    int contador = tamanoArrays-1;

    for (int i = tamanoIndices-1; i >= 0; --i) {

        if (i == 4) {
            posicion = indices[i];
        }
        else{
            int tamanio = 1;
            if (contador > 0){
                contador = contador - 1 ;
            }

            for (int j = tamanoArrays-1; j > contador ; --j) {
                tamanio = tamanio * tamanios[j];
            }
            posicion = posicion + indices[i] * tamanio;
        }
    }

    std::cout << "Posicion : " << posicion << std::endl;
}

int main() {

    std::cout << "Posicion de Arrglos" << std::endl;

    int indices[]={1,5,4,0,1};
    int tamanios[]={5,6,5,5,5};

    int tamanoIndices = sizeof indices/ sizeof indices[0];
    int tamanoArrays = sizeof tamanios/ sizeof tamanios[0];

    posicion(indices,tamanios,tamanoIndices,tamanoArrays);

    return 0;
}

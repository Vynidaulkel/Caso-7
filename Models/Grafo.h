#ifndef GRAFO_H
#define GRAFO_H
#include "Node.h"

template <typename E>
class Grafo{
    public:
    Node** lista = new Node*[27];

    Grafo(){
        for(int i = 0; i < 27;  i++){
            lista[i]= new Node(); 
        }
        //creacion de relaciones
        //primer piso del cubo

        lista[0]->addNeighboor(lista[1], 'A');
        lista[0]->addNeighboor(lista[9], 'K');
        lista[0]->addNeighboor(lista[3], '2');

        lista[1]->addNeighboor(lista[0], 'A');
        lista[1]->addNeighboor(lista[2], 'B');
        lista[1]->addNeighboor(lista[4], '2');
        lista[1]->addNeighboor(lista[10], 'K');

        lista[2]->addNeighboor(lista[1], 'B');
        lista[2]->addNeighboor(lista[11], 'K');
        lista[2]->addNeighboor(lista[5], '2');

        lista[3]->addNeighboor(lista[0], '2');
        lista[3]->addNeighboor(lista[4], 'A');
        lista[3]->addNeighboor(lista[6], '1');
        lista[3]->addNeighboor(lista[12], 'K');

        lista[4]->addNeighboor(lista[3], 'A');
        lista[4]->addNeighboor(lista[5], 'B');
        lista[4]->addNeighboor(lista[1], '2');
        lista[4]->addNeighboor(lista[7], '1');
        lista[4]->addNeighboor(lista[13], 'K');

        lista[5]->addNeighboor(lista[2], '2');
        lista[5]->addNeighboor(lista[4], 'B');
        lista[5]->addNeighboor(lista[8], '1');
        lista[5]->addNeighboor(lista[14], 'K');

        lista[6]->addNeighboor(lista[3], '1');
        lista[6]->addNeighboor(lista[7], 'A');
        lista[6]->addNeighboor(lista[15], 'K');

        lista[7]->addNeighboor(lista[6], 'A');
        lista[7]->addNeighboor(lista[8], 'B');
        lista[7]->addNeighboor(lista[4], '1');
        lista[7]->addNeighboor(lista[16], 'K');

        lista[8]->addNeighboor(lista[5], '1');
        lista[8]->addNeighboor(lista[7], 'B');
        lista[8]->addNeighboor(lista[17], 'K');

        //segundo piso del cubo

        lista[9]->addNeighboor(lista[0], 'K');
        lista[9]->addNeighboor(lista[10], 'A');
        lista[9]->addNeighboor(lista[12], '2');
        lista[9]->addNeighboor(lista[18], 'F');

        lista[10]->addNeighboor(lista[9], 'A');
        lista[10]->addNeighboor(lista[11], 'B');
        lista[10]->addNeighboor(lista[1], 'K');
        lista[10]->addNeighboor(lista[19], 'F');
        lista[10]->addNeighboor(lista[13], '2');

        lista[11]->addNeighboor(lista[2], 'K');
        lista[11]->addNeighboor(lista[10], 'B');
        lista[11]->addNeighboor(lista[20], 'F');
        lista[11]->addNeighboor(lista[14], '2');

        lista[12]->addNeighboor(lista[9], '2');
        lista[12]->addNeighboor(lista[3], 'K');
        lista[12]->addNeighboor(lista[13], 'A');
        lista[12]->addNeighboor(lista[15], '1');
        lista[12]->addNeighboor(lista[21], 'F');

        lista[13]->addNeighboor(lista[10], '2');
        lista[13]->addNeighboor(lista[12], 'A');
        lista[13]->addNeighboor(lista[14], 'B');
        lista[13]->addNeighboor(lista[9], 'K');
        lista[13]->addNeighboor(lista[22], 'F');
        lista[13]->addNeighboor(lista[16], '1');

        lista[14]->addNeighboor(lista[11], '2');
        lista[14]->addNeighboor(lista[5], 'K');
        lista[14]->addNeighboor(lista[13], 'B');
        lista[14]->addNeighboor(lista[23], 'F');
        lista[14]->addNeighboor(lista[17], '1');

        lista[15]->addNeighboor(lista[12], '1');
        lista[15]->addNeighboor(lista[6], 'K');
        lista[15]->addNeighboor(lista[16], 'A');
        lista[15]->addNeighboor(lista[24], 'F');

        lista[16]->addNeighboor(lista[15], 'A');
        lista[16]->addNeighboor(lista[7], 'K');
        lista[16]->addNeighboor(lista[25], 'F');
        lista[16]->addNeighboor(lista[17], 'B');
        lista[16]->addNeighboor(lista[13], '1');

        lista[17]->addNeighboor(lista[14], '1');
        lista[17]->addNeighboor(lista[8], 'K');
        lista[17]->addNeighboor(lista[16], 'B');
        lista[17]->addNeighboor(lista[26], 'F');

        //Tercer piso

        lista[18]->addNeighboor(lista[9], 'F');
        lista[18]->addNeighboor(lista[19], 'A');
        lista[18]->addNeighboor(lista[21], '2');

        lista[19]->addNeighboor(lista[18], 'A');
        lista[19]->addNeighboor(lista[20], 'B');
        lista[19]->addNeighboor(lista[10], 'F');
        lista[19]->addNeighboor(lista[22], '2');

        lista[20]->addNeighboor(lista[19], 'B');
        lista[20]->addNeighboor(lista[11], 'F');
        lista[20]->addNeighboor(lista[23], '2');

        lista[21]->addNeighboor(lista[12], 'F');
        lista[21]->addNeighboor(lista[22], 'A');
        lista[21]->addNeighboor(lista[18], '2');
        lista[21]->addNeighboor(lista[24], '1');

        lista[22]->addNeighboor(lista[21], 'A');
        lista[22]->addNeighboor(lista[13], 'F');
        lista[22]->addNeighboor(lista[23], 'B');
        lista[22]->addNeighboor(lista[19], '2');
        lista[22]->addNeighboor(lista[25], '1');

        lista[23]->addNeighboor(lista[20], '2');
        lista[23]->addNeighboor(lista[14], 'F');
        lista[23]->addNeighboor(lista[22], 'B');
        lista[23]->addNeighboor(lista[26], '1');

        lista[24]->addNeighboor(lista[15], 'F');
        lista[24]->addNeighboor(lista[25], 'A');
        lista[24]->addNeighboor(lista[21], '1');

        lista[25]->addNeighboor(lista[24], 'A');
        lista[25]->addNeighboor(lista[16], 'F');
        lista[25]->addNeighboor(lista[26], 'B');
        lista[25]->addNeighboor(lista[22], '1');

        lista[26]->addNeighboor(lista[17], 'F');
        lista[26]->addNeighboor(lista[23], '1');
        lista[26]->addNeighboor(lista[25], 'B');


    }
    ~Grafo(){
        for (int i=0; i<27; i++)
            delete lista[i];
        delete[] lista;
    }
};

#endif // GRAFO_H
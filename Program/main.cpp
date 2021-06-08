#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../Models/Grafo.h"
#include <time.h>

int main (){
    srand(time(0));
    Grafo<int> grafo; 
    grafo.probabilistic(rand()%6);
    //porcentajes basados en el total de caminos de los 6 primeros
    return 0; 
}
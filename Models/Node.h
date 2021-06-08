#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
    private:
        unordered_map<Node*, char> neighboors;
    public:
        Node (){
        }
        void addNeighboor(Node* pNeighboor, char pValor){
            neighboors[pNeighboor] =  pValor;
        }
};

#endif // NODE_H

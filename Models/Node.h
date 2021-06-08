#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Node
{
    private:
        
    public:
        unordered_map<Node*, char> neighboors;
        int id;
        bool visitado; 

        Node (int id){
            this ->id = id; 
        } 
        void addNeighboor(Node* pNeighboor, char pValor){
            neighboors[pNeighboor] =  pValor;
        }
        vector<char> getSize(){
            
            vector<char> caracteres;
            for(auto x: neighboors){
                caracteres.push_back(x.second);
            }
            return caracteres;
        }
        int getNext(char pLastChar){
            visitado = true;
            for(auto x: neighboors){
                if (x.second == pLastChar){
                    return x.first->getId();
                }
            }
            return 0;
        }
        int getId(){
            return id; 
        }
        
        bool getVisitado(){
            return visitado; 
        }
};

#endif // NODE_H

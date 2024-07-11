#include "Lista.h"

Lista :: ~Lista(){
    while(glowa){
        Node* temp = glowa;
        glowa = glowa -> nastepny;
        delete temp;
    }
}
void Lista :: Dodaj(Kredytobiorca& kredytobiorca){
            Node* newNode = new Node(kredytobiorca);
            if(!glowa){
                glowa = newNode;
                ogon = newNode;
            }
            else{
                ogon -> nastepny = newNode;
                ogon = newNode;
            }
        }
Node* Lista :: GetGlowa(){
    return glowa;
}
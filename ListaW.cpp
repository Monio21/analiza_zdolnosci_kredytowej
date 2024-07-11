#include "ListaW.h"

ListaW :: ~ListaW(){
    while(glowa){
        Node1* temp = glowa;
        glowa = glowa -> nastepny;
        delete temp;
    }
}
void ListaW :: Dodaj(long long int& wynik){
            Node1* newNode = new Node1(wynik);
            if(!glowa){
                glowa = newNode;
                ogon = newNode;
            }
            else{
                ogon -> nastepny = newNode;
                ogon = newNode;
            }
        }
Node1* ListaW :: GetGlowa(){
    return glowa;
}
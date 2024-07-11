#include "Kredytobiorca.h"
#ifndef LISTA_H
#define LISTA_H
#pragma once

struct Node{
    Kredytobiorca kredytobiorca;
    Node * nastepny;

    Node(const Kredytobiorca& kredytobiorca) : kredytobiorca(kredytobiorca), nastepny(nullptr) {}
};

class Lista{
    public:
        Node* glowa;
        Node* ogon;

        Lista() : glowa(nullptr), ogon(nullptr) {}
        ~Lista();

        void Dodaj(Kredytobiorca& kredytobiorca);
        Node* GetGlowa();
};

#endif
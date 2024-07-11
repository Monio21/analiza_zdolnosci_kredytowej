#include "Kredytobiorca.h"
#ifndef LISTAW_H
#define LISTAW_H
#pragma once

struct Node1{
    long long int wynik;
    Node1 * nastepny;

    Node1(const long long int& wynik) : wynik(wynik), nastepny(nullptr) {}
};

class ListaW{
    public:
        Node1* glowa;
        Node1* ogon;

        ListaW() : glowa(nullptr), ogon(nullptr) {}
        ~ListaW();

        void Dodaj(long long int& wynik);
        Node1* GetGlowa();
};

#endif
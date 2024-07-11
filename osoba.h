#include <iostream>
#ifndef OSOBA_H
#define OSOBA_H
#pragma once

class osoba{
    private:
        std::string Imie;
        std::string Nazwisko;
    public:
    osoba() : Imie(""), Nazwisko ("") {}
    ~osoba() {}
    //Settery
        void setImie(const std::string& _Imie);
        void setNazwisko(const std::string& _Nazwisko);
    //Gettery
        std::string GetImie();
        std::string GetNazwisko();
};

#endif
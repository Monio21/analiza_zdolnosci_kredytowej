#include <iostream>
#include <cmath>
#include "osoba.h"
#include "majatek.h"
#ifndef KREDYTOBIORCA_H
#define KREDYTOBIORCA_H
#pragma once

class Kredytobiorca{
    private:
        osoba Osoba;
        int Wiek;
        std::string Stan_cywilny;
        int Dochody;
        std::string Rodzaj_zatrudnienia;
        int Wydatki;
        int Scoring;
        majatek Majatek;
        int Liczba_lat;
    public:
        Kredytobiorca();
        Kredytobiorca(osoba Osoba,int Wiek, std::string Stan_cywilny, int Dochody,
        std::string Rodzaj_zatrudnienia,int Wydatki, int Scoring, majatek Majatek, int Liczba_lat);

    // Settery
        void setOsoba(osoba _Osoba);
        void setWiek(int _Wiek);
        void setStan_cywilny(std::string _Stan_cywilny);
        void setDochody(int _Dochody);
        void setRodzaj_zatrudnienia(std::string _Rodzaj_zatrudnienia);
        void setWydatki(int _Wydatki);
        void setScoring(int _Scoring);
        void setMajatek(majatek _Majatek);
        void setLiczba_lat(int _Liczba_lat);

    // Gettery
        osoba GetOsoba();
        int GetWiek();
        std::string GetStan_Cywilny();
        int GetDochody();
        std::string GetRodzaj_zatrudnienia();
        int GetWydatki();
        int GetScoring();
        majatek GetMajatek();
        int GetLiczba_lat();
};

#endif
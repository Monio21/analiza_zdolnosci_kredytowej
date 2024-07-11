#include "Kredytobiorca.h"
        Kredytobiorca :: Kredytobiorca() : Osoba(), Wiek(0), Stan_cywilny(""), Dochody(0), Rodzaj_zatrudnienia(""),
        Wydatki(0), Scoring(0), Majatek(), Liczba_lat(0) {}
        Kredytobiorca :: Kredytobiorca(osoba Osoba,int Wiek, std::string Stan_cywilny, int Dochody,
        std::string Rodzaj_zatrudnienia,int Wydatki, int Scoring, majatek Majatek,
        int Liczba_rat) : Osoba(Osoba), Wiek(Wiek), Stan_cywilny(Stan_cywilny), Dochody(Dochody),
        Rodzaj_zatrudnienia(Rodzaj_zatrudnienia), Wydatki(Wydatki), Scoring(Scoring),
        Majatek(Majatek), Liczba_lat(Liczba_rat) {}

    // Settery
        void Kredytobiorca :: setOsoba(osoba _Osoba){
            Osoba = _Osoba;
        }
        void Kredytobiorca :: setWiek(int _Wiek){
            Wiek = _Wiek;
        }
        void Kredytobiorca :: setStan_cywilny(std::string _Stan_cywilny){
            Stan_cywilny = _Stan_cywilny;
        }
        void Kredytobiorca :: setDochody(int _Dochody){
            Dochody = _Dochody;
        }
        void Kredytobiorca :: setRodzaj_zatrudnienia(std::string _Rodzaj_zatrudnienia){
            Rodzaj_zatrudnienia = _Rodzaj_zatrudnienia;
        }
        void Kredytobiorca :: setWydatki(int _Wydatki){
            Wydatki = _Wydatki;
        }
        void Kredytobiorca :: setScoring(int _Scoring){
            Scoring = _Scoring;
        }
        void Kredytobiorca :: setMajatek(majatek _Majatek){
            Majatek = _Majatek;
        }
        void Kredytobiorca :: setLiczba_lat(int _Liczba_lat){
            Liczba_lat = _Liczba_lat;
        }

    // Gettery
        osoba Kredytobiorca :: GetOsoba(){
            return Osoba;
        }
        int Kredytobiorca :: GetWiek(){
            return Wiek;
        }
        std::string Kredytobiorca :: GetStan_Cywilny(){
            return Stan_cywilny;
        }
        int Kredytobiorca :: GetDochody(){
            return Dochody;
        }
        std::string Kredytobiorca :: GetRodzaj_zatrudnienia(){
            return Rodzaj_zatrudnienia;
        }
        int Kredytobiorca :: GetWydatki(){
            return Wydatki;
        }
        int Kredytobiorca :: GetScoring(){
            return Scoring;
        }
        majatek Kredytobiorca :: GetMajatek(){
            return Majatek;
        }
        int Kredytobiorca :: GetLiczba_lat(){
            return Liczba_lat;
        }

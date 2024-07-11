#include "osoba.h"

        void osoba :: setImie(const std::string& _Imie){
            Imie = _Imie;
        }
        void osoba :: setNazwisko(const std::string& _Nazwisko){
            Nazwisko = _Nazwisko;
        }
        std::string osoba :: GetImie(){
            return Imie;
        }
        std::string osoba :: GetNazwisko(){
            return Nazwisko;
        }

#include "wejscie.h"


Lista WczytajDane(const std::string& filename){
    Lista lista;
    std::ifstream in(filename);
    
    if(in){
        std::string line;
        while(getline(in,line)){
            std::stringstream ss(line);
            Kredytobiorca kredytobiorca;
            osoba osoba;
            majatek majatek;
            std::string dane;
            getline(ss,dane,',');
            osoba.setImie(dane);
            getline(ss,dane,',');
            osoba.setNazwisko(dane);
            kredytobiorca.setOsoba(osoba);
            getline(ss,dane,',');
            kredytobiorca.setWiek(stoi(dane));
            getline(ss,dane,',');
            kredytobiorca.setStan_cywilny(dane);
            getline(ss,dane,',');
            kredytobiorca.setDochody(stoi(dane));
            getline(ss,dane,',');
            kredytobiorca.setRodzaj_zatrudnienia(dane);
            getline(ss,dane,',');
            kredytobiorca.setWydatki(stoi(dane));
            getline(ss,dane,',');
            kredytobiorca.setScoring(stoi(dane));
            getline(ss,dane,',');
            majatek.SetAuto(stoi(dane));
            getline(ss,dane,',');
            majatek.SetNieruchomosc(stoi(dane));
            kredytobiorca.setMajatek(majatek);
            getline(ss,dane,',');
            kredytobiorca.setLiczba_lat(stoi(dane));
            lista.Dodaj(kredytobiorca);
        }
        in.close();
    }
    return lista;
}

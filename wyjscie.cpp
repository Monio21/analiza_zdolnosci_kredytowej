#include "wyjscie.h"

void ZapiszDane(const std::string& filename, Lista& Kredytobiorcy, ListaW& Wyniki){
    std::ofstream out(filename);
    if(out){
            out << "Imie, Nazwisko, Wiek, Stan cywilny, Dochody, Rodzaj zatrudnienia, Wydatki, Scoring, Auto, Nieruchomosc, Liczba lat, Uzyskany kredyt" << std::endl;
            Node* current = Kredytobiorcy.GetGlowa();
            Node1* currentW = Wyniki.GetGlowa();
            while(current != nullptr){
            out << current -> kredytobiorca.GetOsoba().GetImie() << "," << current -> kredytobiorca.GetOsoba().GetNazwisko() << ","
            << current -> kredytobiorca.GetWiek() << "," << current -> kredytobiorca.GetStan_Cywilny() << "," << current -> kredytobiorca.GetDochody() << ","
            << current -> kredytobiorca.GetRodzaj_zatrudnienia() << "," << current -> kredytobiorca.GetWydatki() << "," << current -> kredytobiorca.GetScoring() << ","
            << current -> kredytobiorca.GetMajatek().GetAuto() << "," << current -> kredytobiorca.GetMajatek().GetNieruchomosc() << ","
            << current -> kredytobiorca.GetLiczba_lat() << "," << currentW -> wynik << std::endl;
            current = current -> nastepny;
            currentW = currentW -> nastepny;
            }
            out.close();
    }
    }
#include "AlgorytmO26.h"

    long long int AlgorytmO26 :: Algorytm(Kredytobiorca Kredytobiorca, double mnoznik){
    long long int zdolnosc_kredytowa = 0;
    double wspolczynnik_dochodu = 0.8;
    double wspolczynnik_scoringu = 0.7;
    double wspolczynnik_aktywow = 0.05;
    

    zdolnosc_kredytowa += Kredytobiorca.GetDochody() * wspolczynnik_dochodu;
    zdolnosc_kredytowa += Kredytobiorca.GetScoring() * wspolczynnik_scoringu;
    zdolnosc_kredytowa += (Kredytobiorca.GetMajatek().GetAuto() + Kredytobiorca.GetMajatek().GetNieruchomosc()) * wspolczynnik_aktywow;
    zdolnosc_kredytowa -= Kredytobiorca.GetWydatki();

    zdolnosc_kredytowa = mnoznik * ((zdolnosc_kredytowa * (Kredytobiorca.GetLiczba_lat() * 12)/4));
    std::cout << "Kredyt jaki jesteś wstanie otrzymać na okres " << round(Kredytobiorca.GetLiczba_lat()) << " lat " << "to " << zdolnosc_kredytowa << " PLN" << std::endl;
    std::cout << std::endl << "Jeżeli podana kwota cię nie satysfakcjonuje zwiększ okres na który chcesz wziąć kredyt. " << std::endl;
    std::cout << std::endl;
    return zdolnosc_kredytowa;
}
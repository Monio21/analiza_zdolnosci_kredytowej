#include "Kredytobiorca.h"
#include "AlgorytmO26.h"
#include "AlgorytmU26.h"
#include "wejscie.h"
#include "zkonsoli.h"
#include "wyjscie.h"
#include "Lista.h"
#include "ListaW.h"

int main(){
    Lista Kredytobiorcy;
    ListaW Wyniki;
    AlgorytmO26 Al;
    AlgorytmU26 AlU;
    char wejscie;
    int licznik = 0;
    long long int wynik;
    Lista Lista_Kredytobiorcow = WczytajDane("dane_wejsciowe.csv");

    std::cout << std::endl << std::endl;
    std::cout << "Witamy w programie do obliczenia zdolności kredytowej pod kredyt hipoteczny " << std::endl;
    std::cout << "Aby wykonac obliczenie dla danych z pliku wpisz 'P' lub 'p', aby przejsc do recznego wprowadzania danych wpisz 'R' lub 'r', aby opuscic program wpisz 'K', 'k' " << std::endl;
    std::cin >> wejscie;
    Node* current = Lista_Kredytobiorcow.GetGlowa();

    while(wejscie == 'P' || wejscie == 'p' || wejscie == 'R' || wejscie == 'r'){
        while(wejscie == 'P' || wejscie == 'p' && current != nullptr){
            if(current -> kredytobiorca.GetWiek() > 26){
                wynik = Al.Algorytm(current -> kredytobiorca,Al.Mnoznik);
                Kredytobiorcy.Dodaj(current -> kredytobiorca);
                Wyniki.Dodaj(wynik);
                licznik++;
                std::cout << "Jezeli chcesz wykonac obliczenia dla nastepnej osoby wpisz 'P' lub 'p', aby wrocic do recznego wprowadzania  wpisz 'R' lub 'r', aby opuscic program wpisz 'K' lub 'k' " << std::endl;
                std::cin >> wejscie;
                std::cout << std::endl;
            }
            else{
                wynik = AlU.Algorytm(current -> kredytobiorca,AlU.Mnoznik);
                Kredytobiorcy.Dodaj(current -> kredytobiorca);
                Wyniki.Dodaj(wynik);
                licznik++;
                std::cout << "Jezeli chcesz wykonac obliczenia dla nastepnej osoby wpisz 'P' lub 'p', aby wrocic do recznego wprowadzania  wpisz 'R' lub 'r', aby opuscic program wpisz 'K' lub 'k' " << std::endl;
                std::cin >> wejscie;
                std::cout << std::endl;
            }
            current = current -> nastepny;
        }
        if(wejscie == 'P' || wejscie == 'p' && current == nullptr){
            std::cout << "Dane z pliku wyczerpane" << std::endl << std::endl;
            std::cout << "Aby przejsc do wprowadzenia recznego wpisz 'R' lub 'r' aby opuscic program wpisz 'K' lub 'k' " << std::endl;
            std::cin >> wejscie; 
        }
        while(wejscie == 'R' || wejscie == 'r'){
            std::cout << std::endl;
            Kredytobiorca Kredytobiorca;
            Kredytobiorca = konsola :: Zkonsoli();
            if(Kredytobiorca.GetWiek() > 26){
                wynik = Al.Algorytm(Kredytobiorca,Al.Mnoznik);
                Kredytobiorcy.Dodaj(Kredytobiorca);
                Wyniki.Dodaj(wynik);
            }
            else{
                wynik = AlU.Algorytm(Kredytobiorca,AlU.Mnoznik);
                Kredytobiorcy.Dodaj(Kredytobiorca);
                Wyniki.Dodaj(wynik);
            }
            
            std::cout << "Jezeli chcesz wykonac obliczenia dla nastepnej osoby recznie wpisz 'R' lub 'r', aby zaczac obliczenia dla danych z pliku wpisz 'P'lub 'p', natomiast aby opuscic program wpisz cos 'K' lub 'k' " << std::endl;
            std::cin >> wejscie;
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Dziękujemy za skorzystanie z naszego programu" << std::endl;
    ZapiszDane("wyjscie.csv",Kredytobiorcy,Wyniki);
}
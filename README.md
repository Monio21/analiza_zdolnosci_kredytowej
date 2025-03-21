
# Kalkulator Zdolności Kredytowej

## Opis projektu

**Kalkulator Zdolności Kredytowej** to program umożliwiający obliczenie zdolności kredytowej dla osób ubiegających się o kredyt hipoteczny. Program pobiera dane z pliku CSV lub umożliwia ręczne wprowadzenie danych, a następnie przetwarza je, aby określić zdolność kredytową każdego kredytobiorcy.

## Funkcjonalności

- **Wczytywanie danych z pliku CSV** – Program wczytuje dane kredytobiorców z pliku `dane_wejsciowe.csv`.
- **Ręczne wprowadzanie danych** – Użytkownik może ręcznie wprowadzić dane kredytobiorcy.
- **Obliczanie zdolności kredytowej** – Program oblicza zdolność kredytową w oparciu o wiek kredytobiorcy i wybrane algorytmy.
- **Zapis danych do pliku CSV** – Wyniki obliczeń są zapisywane do pliku `wyjscie.csv`.

## Struktura projektu

Projekt składa się z następujących plików:

- **main.cpp** – Główny plik wykonywalny programu.
- **Kredytobiorca.h/cpp** – Pliki definicji i implementacji klasy `Kredytobiorca`.
- **osoba.h/cpp** – Pliki definicji i implementacji klasy `osoba`.
- **AlgorytmO26.h/cpp** – Pliki definicji i implementacji algorytmu dla osób powyżej 26 lat.
- **AlgorytmU26.h/cpp** – Pliki definicji i implementacji algorytmu dla osób poniżej 26 lat.
- **wejscie.h/cpp** – Pliki do wczytywania danych z pliku.
- **zkonsoli.h/cpp** – Pliki do ręcznego wprowadzania danych z konsoli.
- **wyjscie.h/cpp** – Pliki do zapisywania danych do pliku.
- **Lista.h/cpp** – Pliki definicji i implementacji listy kredytobiorców.

## Wymagania

- **C++11** lub nowszy
- **CMake** do budowania projektu
- Kompilator zgodny z C++ (np. **g++**, **clang**)

## Budowanie i uruchamianie

Aby zbudować projekt, wykonaj następujące kroki:

1. Sklonuj repozytorium:
    ```sh
    git clone https://github.com/yourusername/kalkulator-zdolnosci-kredytowej.git
    cd kalkulator-zdolnosci-kredytowej
    ```

2. Stwórz katalog build i przejdź do niego:
    ```sh
    mkdir build
    cd build
    ```

3. Wygeneruj pliki make za pomocą CMake:
    ```sh
    cmake ..
    ```

4. Skompiluj projekt:
    ```sh
    make
    ```

5. Uruchom program:
    ```sh
    ./KalkulatorZdolnosciKredytowej
    ```

## Przykład użycia

1. Uruchom program.
2. Wybierz opcję wczytywania danych z pliku (`P`) lub ręcznego wprowadzania danych (`R`).
3. Postępuj zgodnie z instrukcjami wyświetlanymi na ekranie.
4. Po zakończeniu obliczeń, wyniki zostaną zapisane w pliku `wyjscie.csv`.

## Autor

- **Maciej Jerominek** 

## Licencja

Ten projekt jest licencjonowany na podstawie licencji MIT - szczegóły w pliku `LICENSE`.

## Uwagi końcowe

Jeśli masz pytania lub uwagi dotyczące projektu, proszę o kontakt przez GitHub Issues lub bezpośrednio przez e-mail.


#include <iostream>

using namespace std;

// Funkcja obliczająca silnię liczby całkowitej
unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
        return 0;
    }
    unsigned long long wynik = 1;
    for (int i = 2; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int wyjscie;

    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Wybierz czynność, którą chcesz wykonać:" << endl;
        cout << "1. Oblicz silnię z podanej liczby" << endl;
        cout << "0. Wyjście" << endl;
        cout << "Twoj wybor: ";
        cin >> wyjscie;

        switch (wyjscie) {
            case 1: {
                int liczba;
                cout << "Podaj liczbe calkowita: ";
                cin >> liczba;
                cout << "Silnia z " << liczba << " wynosi: " << factorial(liczba) << endl;
                break;
            }
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }
    } while (wyjscie != 0);

    return 0;
}


#include <iostream>

using namespace std;

// Funkcja sprawdzająca, czy liczba jest pierwsza
bool czyPierwsza(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

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
        cout << "1. Sprawdź, czy liczba jest pierwsza" << endl;
        cout << "2. Oblicz silnię liczby" << endl;
        cout << "0. Wyjście" << endl;
        cout << "Twój wybór: ";
        cin >> wyjscie;

        switch (wyjscie) {
            case 1: {
                int liczba;
                cout << "Podaj liczbę całkowitą: ";
                cin >> liczba;
                if (czyPierwsza(liczba))
                    cout << "Liczba " << liczba << " jest pierwsza." << endl;
                else
                    cout << "Liczba " << liczba << " nie jest pierwsza." << endl;
                break;
            }
            case 2: {
                int liczba;
                cout << "Podaj liczbę całkowitą: ";
                cin >> liczba;
                cout << "Silnia z " << liczba << " wynosi: " << factorial(liczba) << endl;
                break;
            }
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidłowy wybór. Spróbuj ponownie." << endl;
        }
    } while (wyjscie != 0);

    return 0;
}


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

int main() {
    int a;

    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Sprawdz, czy liczba jest pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Twoj wybor: ";
        cin >> wyjscie;

        switch (wyjscie) {
            case 1:
                cout << "Podaj liczbe:" << endl;
                if (czyPierwsza(a))
                    cout << "Liczba " << a << " jest pierwsza." << endl;
                else
                    cout << "Liczba " << a << " nie jest pierwsza." << endl;
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }
    } while (wyjscie != 0);

    return 0;
}


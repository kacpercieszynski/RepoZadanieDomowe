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
    int a, b;
    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;

    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        switch (wyjscie) {
            case 1:
                cout << "Silnia z " << a << " wynosi: " << factorial(a) << endl;
                break;
            case 2:
                cout << "Silnia z " << b << " wynosi: " << factorial(b) << endl;
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }
    } while(wyjscie != 0);

    return 0;
}


#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <ctime>

// Definicje algorytmów sortowania
// Tutaj należy zaimplementować wybrane algorytmy sortowania

// Funkcja do generowania tablicy o zadanym rozmiarze zawierającej losowe wartości
int* generateRandomArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand(); // zakładamy zakres losowanych liczb od 0 do 999
    }
    return arr;
}

// Funkcja do wyświetlania tablicy
void displayArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Funkcja do zwalniania pamięci po tablicy
void deleteArray(int* arr) {
    delete[] arr;
}

// Funkcja do sprawdzania czy tablica jest posortowana poprawnie
bool isSorted(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(NULL)); // Inicjalizacja generatora liczb pseudolosowych

    // Menu programu
    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Wczytaj tablice z pliku\n";
        std::cout << "2. Wygeneruj tablice losowych liczb\n";
        std::cout << "3. Wyswietl tablice\n";
        std::cout << "4. Uruchom algorytm sortowania\n";
        std::cout << "5. Zakoncz\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Wczytaj tablicę z pliku
                // Implementacja tego przypadku
                break;
            }
            case 2: {
                // Wygeneruj tablicę losowych liczb
                int size;
                std::cout << "Podaj rozmiar tablicy: ";
                std::cin >> size;
                int* arr = generateRandomArray(size);
                std::cout << "Tablica zostala wygenerowana.\n";
                break;
            }
            case 3: {
                // Wyswietl tablice
                // Implementacja tego przypadku
                break;
            }
            case 4: {
                // Uruchom algorytm sortowania
                // Implementacja tego przypadku
                break;
            }
            case 5: {
                // Zakoncz program
                break;
            }
            default: {
                std::cout << "Nieprawidlowy wybor. Sprobuj ponownie.\n";
                break;
            }
        }
    } while (choice != 5);

    return 0;
}

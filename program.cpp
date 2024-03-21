#include <iostream>

int main() {
    int liczba1, liczba2;

    // Prośba o podanie pierwszej liczby
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;

    // Prośba o podanie drugiej liczby
    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;

    // Obliczenie sumy i wyświetlenie wyniku
    int suma = liczba1 + liczba2;
    std::cout << "Suma podanych liczb to: " << suma << std::endl;

    return 0;
}
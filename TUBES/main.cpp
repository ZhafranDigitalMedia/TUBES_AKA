#include <iostream>
#include "menu.h"

using namespace std;

int main() {
    int menuCount;
    cout << "Masukkan jumlah pilihan menu yang tersedia: ";
    cin >> menuCount;

    cout << "\nPerhitungan Pilihan Menu di Restoran\n";
    cout << "Jumlah menu yang dapat dipilih adalah " << menuCount << "!\n";

    int resultIterative = calculateMenuCombinations(menuCount);
    cout << "Hasil perhitungan (Iteratif): " << resultIterative << " kombinasi pilihan menu.\n";

    int resultRecursive = factorialRecursive(menuCount);
    cout << "Hasil perhitungan (Rekursif): " << resultRecursive << " kombinasi pilihan menu.\n";

    return 0;
}

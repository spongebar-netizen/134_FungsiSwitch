#include <iostream>
using namespace std;

int a, b;

void input()
{
    cout << "Bilangan Pertama = ";
    cin >> a;

    cout << "Bilangan Kedua = ";
    cin >> b;
}

int Penjumlahan(int bil_1, int bil_2) {
    return bil_1 + bil_2;
}

int Pengurangan(int bil_1, int bil_2) {
    return bil_1 - bil_2;
}

int Perkalian(int bil_1, int bil_2) {
    return bil_1 * bil_2;
}

int Pembagian(int bil_1, int bil_2) {
    return bil_1 / bil_2;
}


int main()
{
    system("cls"):
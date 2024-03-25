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
    int pilihan;
    do
    {

        system("cls");
        cout << "======= Menu ======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5.Keluar" << endl;
        cout << "Masukkan menu yang ingin dipilih (1/2/3/4/5): ";
        cin >> pilihan;


        switch (pilihan)
        {
        case 1:
            input();
            cout << "hasil perjumlahan = " << Penjumlahan(a, b) << endl;
            system("pause");
            break;

        case 2:
            input();
            cout << "hasil pengurangan = " << Pengurangan(a, b) << endl;
            system("pause");
            break;
        case 3:
            input();
            cout << "hasil perkalian = " << Perkalian(a, b) << endl;
            system("pause");
            break;
        case 4:
            input();
            cout << "hasil pembagian = " << Pembagian(a, b) << endl;
            system("pause");
            break;
        case 5:
            break;
        default:
            cout << "Menu tidak tersedia silahkan memlilih lagi !!!!!!!!" << endl;
            break;
        }

    } while (pilihan != 5);


}


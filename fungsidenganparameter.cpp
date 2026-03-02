// library
#include <iostream>
using namespace std;
// deklarasi variabel global
int panjang, lebar;
// implementasi fungsi dan prosedur
void input()
{
    cout << "Masukan Panajang ; ";
    cin >> panjang;
    cout << "Masukan Lebar : ";
    cin >> lebar;
}
int luasPersegi(int a, int b)
{
    return a * b;
}
int jumlah(int x, int y, int z)
{
    return x + y + z;
}
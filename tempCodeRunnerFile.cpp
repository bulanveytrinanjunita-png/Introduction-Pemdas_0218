#include <iostream>
using namespace std;

float Luas, d1, d2;

void ProsedurInputData()
{
    cout << " Masukan diagonal 1 : ";
    cin >> d1;
    cout << "Masukan diagonal 2 : ";
    cin >> d2;
}

float ProsedurHitungLuasBerparameter(float d1, float d2)
{
    return 0.5 * d1 * d2;
}

void PrusedurOutput()
{
    cout << "Luas Ketupat :" << ProsedurHitungLuasBerparameter(d1, d2);
}

int main()
{
    ProsedurInputData();
    PrusedurOutput();
}
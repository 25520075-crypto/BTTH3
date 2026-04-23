#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main() {
    cDaThuc A, B;

    cout << "Nhap da thuc A:\n";
    A.Nhap();

    cout << "Nhap da thuc B:\n";
    B.Nhap();

    cout << "\nDa thuc A: ";
    A.Xuat();

    cout << "Da thuc B: ";
    B.Xuat();

    cDaThuc tong = A.Cong(B);
    cDaThuc hieu = A.Tru(B);

    cout << "\nTong A + B: ";
    tong.Xuat();

    cout << "Hieu A - B: ";
    hieu.Xuat();

    float x;
    cout << "\nNhap x: ";
    cin >> x;

    cout << "Gia tri A tai x = " << x << " la: "
         << A.TinhGiaTri(x);

    return 0;
}

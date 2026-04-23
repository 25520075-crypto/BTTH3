#include "cArray.h"

int main() {
    cArray a;
    int n, x;

    cout << "Nhap n: ";
    cin >> n;

    a.TaoNgauNhien(n);

    cout << "Mang: ";
    a.Xuat();

    cout << "Nhap x can dem: ";
    cin >> x;
    cout << "So lan xuat hien: " << a.DemX(x) << endl;

    if (a.KiemTraTangDan())
        cout << "Mang tang dan\n";
    else
        cout << "Mang khong tang dan\n";

    int le = a.LeNhoNhat();
    if (le == -1)
        cout << "Khong co so le\n";
    else
        cout << "So le nho nhat: " << le << endl;

    int nt = a.NguyenToLonNhat();
    if (nt == -1)
        cout << "Khong co so nguyen to\n";
    else
        cout << "So nguyen to lon nhat: " << nt << endl;

    cout << "Sap xep tang:\n";
    a.SapXepTang();
    a.Xuat();

    cout << "Sap xep giam:\n";
    a.SapXepGiam();
    a.Xuat();

    return 0;
}

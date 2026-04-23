#include "cDaGiac.h"

int main() {
    cDaGiac dg;

    dg.Nhap();

    if (!dg.HopLe()) {
        cout << "Khong phai da giac!";
        return 0;
    }

    cout << "\nDa giac:\n";
    dg.Xuat();

    cout << "\nChu vi: " << dg.ChuVi();
    cout << "\nDien tich: " << dg.DienTich();

    cout << "\nTinh tien (1,1):\n";
    dg.TinhTien(1, 1);
    dg.Xuat();

    cout << "\nPhong to (2 lan):\n";
    dg.PhongTo(2);
    dg.Xuat();

    cout << "\nQuay 90 do:\n";
    dg.Quay(90);
    dg.Xuat();

    return 0;
}

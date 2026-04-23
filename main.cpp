#include "cTamGiac.h"

int main()
{
    cTamGiac tg;

    tg.Nhap();

    cout << "\nThong tin tam giac:\n";
    tg.Xuat();

    cout << "\nChu vi: " << tg.ChuVi();
    cout << "\nDien tich: " << tg.DienTich() << "\n";

    tg.PhanLoai();

    cout << "\nTinh tien (1,1):\n";
    tg.TinhTien(1, 1);
    tg.Xuat();

    cout << "\nPhong to (2 lan):\n";
    tg.PhongTo(2);
    tg.Xuat();

    return 0;
}

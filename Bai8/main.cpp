#include "cListNVSX.h"

int main() {
    cListNVSX ds;

    ds.Nhap();
    ds.Xuat();

    ds.LuongMin();
    ds.TongLuong();
    ds.TuoiMax();

    ds.SapXepTang();
    cout << "\nSau khi sap xep:\n";
    ds.Xuat();

    return 0;
}

#include "cListNVSX.h"

cListNVSX::cListNVSX() {
    n = 0;
    ds = nullptr;
}

cListNVSX::~cListNVSX() {
    delete[] ds;
}

void cListNVSX::Nhap() {
    cout << "Nhap so luong: ";
    cin >> n;

    ds = new cNhanVienSX[n];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap NV thu " << i + 1 << ":\n";
        ds[i].Nhap();
    }
}

void cListNVSX::Xuat() {
    cout << "\nDanh sach nhan vien:\n";
    for (int i = 0; i < n; i++)
        ds[i].Xuat();
}

void cListNVSX::LuongMin() {
    if (n == 0) return;

    float min = ds[0].getLuong();

    for (int i = 1; i < n; i++)
        if (ds[i].getLuong() < min)
            min = ds[i].getLuong();

    cout << "\nNhan vien luong thap nhat:\n";
    for (int i = 0; i < n; i++)
        if (ds[i].getLuong() == min)
            ds[i].Xuat();
}

void cListNVSX::TongLuong() {
    float tong = 0;

    for (int i = 0; i < n; i++)
        tong += ds[i].getLuong();

    cout << "\nTong luong: " << tong << endl;
}

void cListNVSX::TuoiMax() {
    if (n == 0) return;

    int max = ds[0].getTuoi();

    for (int i = 1; i < n; i++)
        if (ds[i].getTuoi() > max)
            max = ds[i].getTuoi();

    cout << "\nNhan vien tuoi cao nhat:\n";
    for (int i = 0; i < n; i++)
        if (ds[i].getTuoi() == max)
            ds[i].Xuat();
}

void cListNVSX::SapXepTang() {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (ds[i].getLuong() > ds[j].getLuong())
                swap(ds[i], ds[j]);
}

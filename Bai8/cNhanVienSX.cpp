#include "cNhanVienSX.h"
#include <ctime>

cNhanVienSX::cNhanVienSX() {
    ma = "";
    ten = "";
    ngay = thang = nam = 0;
    soSP = 0;
    donGia = 0;
}

void cNhanVienSX::Nhap() {
    cin.ignore(1); // sửa

    cout << "Nhap ma: ";
    getline(cin, ma);

    cout << "Nhap ten: ";
    getline(cin, ten);

    cout << "Nhap ngay thang nam sinh: ";
    cin >> ngay >> thang >> nam;

    cout << "Nhap so san pham: ";
    cin >> soSP;

    cout << "Nhap don gia: ";
    cin >> donGia;
}

void cNhanVienSX::Xuat() {
    cout << ma << " | " << ten << " | "
        << ngay << "/" << thang << "/" << nam
        << " | SP: " << soSP
        << " | Don gia: " << donGia
        << " | Luong: " << TinhLuong()
        << endl;
}

float cNhanVienSX::TinhLuong() {
    return soSP * donGia;
}

int cNhanVienSX::TinhTuoi() {
    time_t t = time(0);
    tm* now = localtime(&t);
    int namHienTai = now->tm_year + 1900;

    return namHienTai - nam;
}

float cNhanVienSX::getLuong() {
    return TinhLuong();
}

int cNhanVienSX::getTuoi() {
    return TinhTuoi();
}

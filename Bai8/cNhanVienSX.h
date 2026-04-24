#pragma once
#include <iostream>
#include <string>
using namespace std;

class cNhanVienSX {
private:
    string ma, ten;
    int ngay, thang, nam;
    int soSP;
    float donGia;

public:
    cNhanVienSX();

    void Nhap();
    void Xuat();

    float TinhLuong();
    int TinhTuoi();

    // getter
    float getLuong();
    int getTuoi();
};

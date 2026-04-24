#pragma once
#include "cNhanVienSX.h"

class cListNVSX {
private:
    int n;
    cNhanVienSX* ds;

public:
    cListNVSX();
    ~cListNVSX();

    void Nhap();
    void Xuat();

    void LuongMin();
    void TongLuong();
    void TuoiMax();

    void SapXepTang();
};

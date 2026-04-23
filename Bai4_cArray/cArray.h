#pragma once
#include <iostream>
using namespace std;

class cArray {
private:
    int n;
    int* a;

public:
    cArray();
    ~cArray();

    void TaoNgauNhien(int n);
    void Xuat();

    int DemX(int x);
    bool KiemTraTangDan();

    int LeNhoNhat();
    int NguyenToLonNhat();

    void SapXepTang();
    void SapXepGiam();

    bool LaNguyenTo(int x);
};

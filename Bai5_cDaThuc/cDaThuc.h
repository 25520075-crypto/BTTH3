#pragma once
#include <iostream>
using namespace std;

class cDaThuc {
private:
    int bac;
    float* heSo;

public:
    cDaThuc(int b = 0);
    cDaThuc(const cDaThuc& other);        // copy constructor
    cDaThuc& operator=(const cDaThuc& other); // toán tử gán
    ~cDaThuc();

    void Nhap();
    void Xuat();
    float TinhGiaTri(float x);

    cDaThuc Cong(const cDaThuc& dt);
    cDaThuc Tru(const cDaThuc& dt);
};

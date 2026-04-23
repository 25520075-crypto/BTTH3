#pragma once
#include <iostream>
using namespace std;

class Diem
{
public:
    double x, y;

    void Nhap();
    void Xuat();
};

class cTamGiac
{
private:
    Diem A, B, C;

public:
    void Nhap();
    void Xuat();

    double DoDai(Diem P, Diem Q);

    bool KiemTraTamGiac();
    void PhanLoai();

    double ChuVi();
    double DienTich();

    void TinhTien(double dx, double dy);
    void PhongTo(double k);
    void ThuNho(double k);
};

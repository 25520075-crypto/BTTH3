#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Diem {
public:
    double x, y;
    void Nhap();
    void Xuat();
};

class cDaGiac {
private:
    int n;
    vector<Diem> ds;

public:
    void Nhap();
    void Xuat();

    double DoDai(Diem A, Diem B);

    bool HopLe();
    double ChuVi();
    double DienTich();

    void Quay(double goc);
    void TinhTien(double dx, double dy);
    void PhongTo(double k);
    void ThuNho(double k);
};

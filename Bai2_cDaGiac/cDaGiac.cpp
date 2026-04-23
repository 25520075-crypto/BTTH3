#include "cDaGiac.h"
#include <cmath>

void Diem::Nhap() {
    cin >> x >> y;
}

void Diem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}

void cDaGiac::Nhap() {
    cout << "Nhap so dinh: ";
    cin >> n;

    ds.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap diem " << i + 1 << ": ";
        ds[i].Nhap();
    }
}

void cDaGiac::Xuat() {
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
        cout << " ";
    }
}

double cDaGiac::DoDai(Diem A, Diem B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

bool cDaGiac::HopLe() {
    return n >= 3;
}

double cDaGiac::ChuVi() {
    double cv = 0;
    for (int i = 0; i < n; i++) {
        cv += DoDai(ds[i], ds[(i + 1) % n]);
    }
    return cv;
}

double cDaGiac::DienTich() {
    double s = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        s += ds[i].x * ds[j].y - ds[j].x * ds[i].y;
    }
    return abs(s) / 2;
}

void cDaGiac::TinhTien(double dx, double dy) {
    for (int i = 0; i < n; i++) {
        ds[i].x += dx;
        ds[i].y += dy;
    }
}

void cDaGiac::PhongTo(double k) {
    for (int i = 0; i < n; i++) {
        ds[i].x *= k;
        ds[i].y *= k;
    }
}

void cDaGiac::ThuNho(double k) {
    for (int i = 0; i < n; i++) {
        ds[i].x /= k;
        ds[i].y /= k;
    }
}

void cDaGiac::Quay(double goc) {
    double rad = goc * M_PI / 180;
    for (int i = 0; i < n; i++) {
        double x = ds[i].x * cos(rad) - ds[i].y * sin(rad);
        double y = ds[i].x * sin(rad) + ds[i].y * cos(rad);
        ds[i].x = x;
        ds[i].y = y;
    }
}

#include "cTamGiac.h"
#include <cmath>

void Diem::Nhap()
{
    cin >> x >> y;
}

void Diem::Xuat()
{
    cout << "(" << x << ", " << y << ")";
}

void cTamGiac::Nhap()
{
    cout << "Nhap diem A: ";
    A.Nhap();
    cout << "Nhap diem B: ";
    B.Nhap();
    cout << "Nhap diem C: ";
    C.Nhap();
}

void cTamGiac::Xuat()
{
    cout << "A"; A.Xuat();
    cout << " B"; B.Xuat();
    cout << " C"; C.Xuat();
}

double cTamGiac::DoDai(Diem P, Diem Q)
{
    return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}

bool cTamGiac::KiemTraTamGiac()
{
    double AB = DoDai(A, B);
    double BC = DoDai(B, C);
    double CA = DoDai(C, A);

    return (AB + BC > CA && AB + CA > BC && BC + CA > AB);
}

void cTamGiac::PhanLoai()
{
    double AB = DoDai(A, B);
    double BC = DoDai(B, C);
    double CA = DoDai(C, A);

    if (!KiemTraTamGiac())
    {
        cout << "Khong phai tam giac\n";
        return;
    }

   const double eps = 1e-6;

if (abs(AB - BC) < eps && abs(BC - CA) < eps)
    cout << "Tam giac deu\n";
else if (abs(AB - BC) < eps || abs(AB - CA) < eps || abs(BC - CA) < eps)
    cout << "Tam giac can\n";
else if (abs(AB*AB + BC*BC - CA*CA) < eps ||
         abs(AB*AB + CA*CA - BC*BC) < eps ||
         abs(BC*BC + CA*CA - AB*AB) < eps)
    cout << "Tam giac vuong\n";
else
    cout << "Tam giac thuong\n";
}

double cTamGiac::ChuVi()
{
    return DoDai(A, B) + DoDai(B, C) + DoDai(C, A);
}

double cTamGiac::DienTich()
{
    double AB = DoDai(A, B);
    double BC = DoDai(B, C);
    double CA = DoDai(C, A);

    double p = (AB + BC + CA) / 2;
    return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}

void cTamGiac::TinhTien(double dx, double dy)
{
    A.x += dx; A.y += dy;
    B.x += dx; B.y += dy;
    C.x += dx; C.y += dy;
}

void cTamGiac::PhongTo(double k)
{
    A.x *= k; A.y *= k;
    B.x *= k; B.y *= k;
    C.x *= k; C.y *= k;
}

void cTamGiac::ThuNho(double k)
{
    A.x /= k; A.y /= k;
    B.x /= k; B.y /= k;
    C.x /= k; C.y /= k;
}

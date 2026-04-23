#include "cDaThuc.h"
#include <cmath>

// Constructor
cDaThuc::cDaThuc(int b) {
    bac = b;
    heSo = new float[bac + 1];
    for (int i = 0; i <= bac; i++)
        heSo[i] = 0;
}

// Copy constructor
cDaThuc::cDaThuc(const cDaThuc& other) {
    bac = other.bac;
    heSo = new float[bac + 1];
    for (int i = 0; i <= bac; i++)
        heSo[i] = other.heSo[i];
}

// Toán tử gán
cDaThuc& cDaThuc::operator=(const cDaThuc& other) {
    if (this != &other) {
        delete[] heSo;

        bac = other.bac;
        heSo = new float[bac + 1];

        for (int i = 0; i <= bac; i++)
            heSo[i] = other.heSo[i];
    }
    return *this;
}

// Destructor
cDaThuc::~cDaThuc() {
    delete[] heSo;
}

// Nhập
void cDaThuc::Nhap() {
    cout << "Nhap bac da thuc: ";
    cin >> bac;

    delete[] heSo;
    heSo = new float[bac + 1];

    for (int i = bac; i >= 0; i--) {
        cout << "He so x^" << i << ": ";
        cin >> heSo[i];
    }
}

// Xuất
void cDaThuc::Xuat() {
    bool first = true;
    for (int i = bac; i >= 0; i--) {
        if (heSo[i] != 0) {
            if (!first && heSo[i] > 0) cout << " + ";
            if (heSo[i] < 0) cout << " - ";

            cout << abs(heSo[i]) << "x^" << i;
            first = false;
        }
    }
    if (first) cout << "0"; // trường hợp toàn 0
    cout << endl;
}

// Tính giá trị
float cDaThuc::TinhGiaTri(float x) {
    float sum = 0;
    for (int i = 0; i <= bac; i++) {
        sum += heSo[i] * pow(x, i);
    }
    return sum;
}

// Cộng
cDaThuc cDaThuc::Cong(const cDaThuc& dt) {
    int maxBac = (bac > dt.bac) ? bac : dt.bac;
    cDaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        float a = (i <= bac) ? heSo[i] : 0;
        float b = (i <= dt.bac) ? dt.heSo[i] : 0;
        kq.heSo[i] = a + b;
    }
    return kq;
}

// Trừ
cDaThuc cDaThuc::Tru(const cDaThuc& dt) {
    int maxBac = (bac > dt.bac) ? bac : dt.bac;
    cDaThuc kq(maxBac);

    for (int i = 0; i <= maxBac; i++) {
        float a = (i <= bac) ? heSo[i] : 0;
        float b = (i <= dt.bac) ? dt.heSo[i] : 0;
        kq.heSo[i] = a - b;
    }
    return kq;
}

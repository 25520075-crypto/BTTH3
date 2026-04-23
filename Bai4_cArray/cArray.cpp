#include "cArray.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>

// Constructor
cArray::cArray() {
    n = 0;
    a = NULL;
}

// Destructor
cArray::~cArray() {
    delete[] a;
    a = NULL;
}

// Tạo mảng ngẫu nhiên
void cArray::TaoNgauNhien(int n) {
    this->n = n;

    // tránh leak bộ nhớ
    if (a != NULL)
        delete[] a;

    a = new int[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}

// Xuất mảng
void cArray::Xuat() {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Đếm số lần xuất hiện của x
int cArray::DemX(int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            dem++;
    }
    return dem;
}

// Kiểm tra tăng dần
bool cArray::KiemTraTangDan() {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

// Tìm số lẻ nhỏ nhất
int cArray::LeNhoNhat() {
    int min = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (!found || a[i] < min) {
                min = a[i];
                found = true;
            }
        }
    }
    return found ? min : -1;
}

// Kiểm tra số nguyên tố
bool cArray::LaNguyenTo(int x) {
    if (x < 2) return false;

    int limit = sqrt(x);
    for (int i = 2; i <= limit; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

// Tìm số nguyên tố lớn nhất
int cArray::NguyenToLonNhat() {
    int max = -1;

    for (int i = 0; i < n; i++) {
        if (LaNguyenTo(a[i])) {
            if (a[i] > max)
                max = a[i];
        }
    }
    return max;
}

// Sắp xếp tăng (Selection Sort)
void cArray::SapXepTang() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Sắp xếp giảm
void cArray::SapXepGiam() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

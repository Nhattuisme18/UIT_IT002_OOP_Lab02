#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

class NgayThangNam {
private:
    int iNgay, iThang, iNam;
    bool LaNamNhuan(int n);
    int SoNgayTrongThang(int t, int n);

public:
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();
};

#endif

Code của file NgayThangNam.cpp :
#include "NgayThangNam.h"
#include <iostream>

using namespace std;

bool NgayThangNam::LaNamNhuan(int n) {
    return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
}

int NgayThangNam::SoNgayTrongThang(int t, int n) {
    switch (t) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 2:
        if (LaNamNhuan(n)) {
            return 29;
        }
        else return 28;
    default: return 30;
    }
}

void NgayThangNam::Nhap() {

    do {
        cout << "Nhap ngay: "; cin >> iNgay;
        cout << "Nhap thang: "; cin >> iThang;
        cout << "Nhap nam: "; cin >> iNam;
        if (iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > SoNgayTrongThang(iThang, iNam) || iNam < 0) {
            cout << "Ngay khong hop le, vui long nhap lai!\n";
        }
    } while (iThang < 1 || iThang > 12 || iNgay < 1 || iNgay > SoNgayTrongThang(iThang, iNam) || iNam < 0);
}

void NgayThangNam::NgayThangNamTiepTheo() {
    iNgay++;
    if (iNgay > SoNgayTrongThang(iThang, iNam)) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
}

void NgayThangNam::Xuat() {
    cout << iNgay << "/";
    cout << iThang << "/" << iNam << endl;

}




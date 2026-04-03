#include "SoPhuc.h"
#include <iostream>

using namespace std;

int main() {
    SoPhuc a, b;
    cout << "Nhap so phuc A: \n"; a.Nhap();
    cout << "Nhap so phuc B: \n"; b.Nhap();
    SoPhuc tong = a.Tong(b);
    SoPhuc hieu = a.Hieu(b);
    SoPhuc tich = a.Tich(b);
    SoPhuc thuong = a.Thuong(b);
    cout << "Tong: "; 
    tong.Xuat();
    cout <<endl<< "Hieu: "; 
    hieu.Xuat();
    cout << endl;
    cout << "Tich: ";
    tich.Xuat();
    cout << endl;

    cout << "Thuong: ";
    thuong.Xuat();
    cout << endl;
    return 0;
}

#include <iostream>
#include "PhanSo.h"

using namespace std;

int main() {
    PhanSo a, b;

    cout << "Nhap phan so A: \n";
    a.Nhap();

    cout << "Nhap phan so B: \n";
    b.Nhap();

    PhanSo tong = a.TinhTong(b);
    PhanSo hieu = a.TinhHieu(b);
    PhanSo tich = a.TinhTich(b);
    PhanSo thuong = a.TinhThuong(b);

    cout << "Tong: "; tong.Xuat();
    cout << '\n' << "Hieu: "; hieu.Xuat();
    cout << '\n' << "Tich: "; tich.Xuat();
    cout << '\n' << "Thuong: "; thuong.Xuat();
    cout << '\n';
    int cmp = a.SoSanh(b);
    if (cmp == 1)
        cout << "Ket qua: A > B\n";
    else if (cmp == 0)
        cout << "Ket qua: A = B\n";
    else
        cout << "Ket qua: A < B\n";

    return 0;
}

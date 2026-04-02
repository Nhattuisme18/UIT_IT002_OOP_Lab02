#include "NgayThangNam.h"
#include <iostream>

using namespace std;

int main() {
    NgayThangNam date;
    date.Nhap();
    date.NgayThangNamTiepTheo();
    cout << "Ngay tiep theo la: ";
    date.Xuat();
    return 0;
}

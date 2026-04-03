#include "NgayThangNam.h"
#include <iostream>
using namespace std;


bool NgayThangNam::kiemtraNamNhuan(int n)
{
	return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
}

int NgayThangNam::SoNgayTrongThang(int t, int n)
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (kiemtraNamNhuan(n) && t == 2)
		return 29;
	return days[t];

}
void NgayThangNam::Nhap() {

	while (1) {
		bool valid = 1;
		cout << "Nhap ngay thang nam: ";
		cin >> iNgay >> iThang >> iNam;
		if (iNgay < 1 || iNgay > SoNgayTrongThang(iThang, iNam)) {
			valid = 0;
			cout << "Ngay khong hop le.\n";
		}

		if (iThang < 1 || iThang > 12) {
			valid = 0;
			cout << "Thang khong hop le.\n";
		}

		if (iNam < 0) {
			valid = 0;
			cout << "Nam khong hop le.\n";
		}
		if (valid)break;
	}
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

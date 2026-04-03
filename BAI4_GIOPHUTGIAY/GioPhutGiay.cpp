#include "GioPhutGiay.h"
#include <iostream>

using namespace std;



void GioPhutGiay::Nhap() {
	while (1) {
		bool valid = 1;
		cout << "Nhap gio, phut, giay: ";
		cin >> iGio >> iPhut >> iGiay;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Nhap sai dinh dang.\n";
			continue;
		}

		if (iGio >= 0 && iGio < 24 && iPhut >= 0 && iPhut < 60 && iGiay >= 0 && iGiay < 60) break;
		else {
			if (iGio < 0 || iGio > 24) {
				cout << "Gio khong hop le.\n";
				valid = 0;
			}
			if (iPhut < 0 || iPhut>60) {
				cout << "Phut khong hop le.\n";
				valid = 0;
			}
			if (iGiay < 0 || iGiay >60) {
				cout << "Giay khong hop le.\n";
				valid = 0;
			}
		}
		if (valid) break;
	}
}

void GioPhutGiay::Xuat() {
	cout << "Thoi diem moi (+1s) la: " << endl;
	cout << iGio << " gio " << iPhut << " phut " << iGiay << " giay";
}

void GioPhutGiay::TinhCongThemMotGiay() {
	iGiay++;
	if (iGiay == 60) {
		iGiay = 0;
		iPhut++;
	}if (iPhut == 60) {
		iPhut = 0;
		iGio++;
	}if (iGio == 24) {
		iGio = 0;
	}
}

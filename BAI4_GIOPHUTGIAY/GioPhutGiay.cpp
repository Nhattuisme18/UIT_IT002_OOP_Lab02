#include "GioPhutGiay.h"
#include <iostream>

using namespace std;

bool GioPhutGiay::GioHopLe(int h, int p, int s) {
	if (h >= 24 || h < 0 || p >= 60 || p < 0 || s >= 60 || s < 0) return false;
	else return true;
}


void GioPhutGiay::Nhap() {
	do {
		cout << "Hay nhap gio: ";
		cin >> iGio;
		cout << "Hay nhap phut: ";
		cin >> iPhut;
		cout << "Hay nhap giay: ";
		cin >> iGiay;
		if (!GioHopLe(iGio, iPhut, iGiay)) {
			cout << "Thoi gian ko hop le, vui long nhap lai." << '\n';
		}
	} while (!GioHopLe(iGio, iPhut, iGiay));
}
void GioPhutGiay::Xuat() {
	cout << "Thoi diem sau khi cong them 1 giay la: ";
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

#include "PhanSo.h"
#include <iostream>
#include <cmath>  

using namespace std;

PhanSo::PhanSo(int tu, int mau) {
	iTu = tu;
	iMau = (mau != 0) ? mau : 1;
}

int UCLN(int a, int b) {
	if (b == 0) return a;
	return UCLN(b, a % b);
}

void PhanSo::Nhap() {
	while (true) {
		cout << "Nhap tu so: ";
		if (cin >> iTu) break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Tu so phai la so nguyen. Vui long nhap lai!\n";
	}

	while (true) {
		cout << "Nhap mau so (khac 0): ";
		if (cin >> iMau && iMau != 0) break;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Mau so phai la so nguyen. Vui long nhap lai!\n";
		}
		else if (iMau == 0) {
			cout << "Mau so khong duoc bang 0. Vui long nhap lai!\n";
		}
	}
	RutGon();
}

void PhanSo::Xuat() {
	if (iTu == 0) {
		cout << "0";
	}
	else if (iMau == 1) {
		cout << iTu;
	}
	else {
		cout << iTu << "/" << iMau;
	}
}

void PhanSo::RutGon() {
	if (iTu == 0) {
		iMau = 1;
		return;
	}
	int ucln = UCLN(abs(iTu), abs(iMau));
	iTu /= ucln;
	iMau /= ucln;


	if (iMau < 0) {
		iTu = -iTu;
		iMau = -iMau;
	}
}

PhanSo PhanSo::TinhTong(PhanSo ps) {
	PhanSo kq;
	kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
	kq.iMau = iMau * ps.iMau;
	kq.RutGon();
	return kq;
}

PhanSo PhanSo::TinhHieu(PhanSo ps) {
	PhanSo kq;
	kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
	kq.iMau = iMau * ps.iMau;
	kq.RutGon();
	return kq;
}

PhanSo PhanSo::TinhTich(PhanSo ps) {
	PhanSo kq;
	kq.iTu = iTu * ps.iTu;
	kq.iMau = iMau * ps.iMau;
	kq.RutGon();
	return kq;
}

PhanSo PhanSo::TinhThuong(PhanSo ps) {
	PhanSo kq;
	if (ps.iTu == 0) {
		cout << "Khong the chia cho 0!\n";
		return kq;
	}
	kq.iTu = iTu * ps.iMau;
	kq.iMau = iMau * ps.iTu;
	kq.RutGon();
	return kq;
}

int PhanSo::SoSanh(PhanSo ps) {
	int a = iTu * ps.iMau;
	int b = ps.iTu * iMau;

	if (a > b) return 1;
	if (a == b) return 0;
	return -1;
}

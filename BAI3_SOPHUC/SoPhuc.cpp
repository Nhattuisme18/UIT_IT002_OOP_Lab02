#include "SoPhuc.h"
#include <iostream>
using namespace std;

#include <iostream>
#include <limits>

using namespace std;

void SoPhuc::Nhap() {
    while (true) {
        cout << "Hay nhap phan thuc (so thuc): ";
        if (cin >> iThuc) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Phan thuc khong hop le. Vui long nhap lai!\n";
        }
    }

    while (true) {
        cout << "Hay nhap phan ao (so thuc): ";
        if (cin >> iAo) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Phan ao khong hop le. Vui long nhap lai!\n";
        }
    }
}


void SoPhuc::Xuat() {
	if (iAo >= 0) {
		cout << iThuc << "+" << iAo << "i";
	}
	else {
		cout << iThuc << "-" << -iAo << "i";
	}
}
SoPhuc SoPhuc::Tong(SoPhuc& sp) {
	SoPhuc kq;
	kq.iThuc = iThuc + sp.iThuc;
	kq.iAo = iAo + sp.iAo;
	return kq;
}
SoPhuc SoPhuc::Hieu(SoPhuc& sp) {
	SoPhuc kq;
	kq.iThuc = iThuc - sp.iThuc;
	kq.iAo = iAo - sp.iAo;
	return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc& sp) {
	SoPhuc kq;
	kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
	kq.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
	return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc& sp) {
	SoPhuc kq;
	kq.iThuc = 0;
	kq.iAo = 0;  
	double mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
	if (mau != 0) {
		kq.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mau;
		kq.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / mau;
	}
	else {
		cout << "Loi: Khong the chia cho so phuc 0+0i.\n";
	}
	return kq;
}

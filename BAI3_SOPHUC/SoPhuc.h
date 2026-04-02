#pragma once
#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc {
private:
	double iThuc;
	double iAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(SoPhuc& a);
	SoPhuc Hieu(SoPhuc& a);
	SoPhuc Tich(SoPhuc& a);
	SoPhuc Thuong(SoPhuc& a);
};

#endif

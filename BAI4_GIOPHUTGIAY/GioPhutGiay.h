#pragma once
#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H

class GioPhutGiay {
private:
	int iGio;
	int iPhut;
	int iGiay;
	bool GioHopLe(int h, int p, int s);
public:
	void Nhap();
	void Xuat();
	void TinhCongThemMotGiay();
};

#endif 

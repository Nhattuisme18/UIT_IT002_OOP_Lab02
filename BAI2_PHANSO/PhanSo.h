#pragma once
#ifndef PHANSO_H
#define PHANSO_H

class PhanSo {
private:
    int iTu;
    int iMau;

public:
    PhanSo(int tu = 0, int mau = 1);

    void Nhap();
    void Xuat();
    void RutGon();

    PhanSo TinhTong(PhanSo ps);
    PhanSo TinhHieu(PhanSo ps);
    PhanSo TinhTich(PhanSo ps);
    PhanSo TinhThuong(PhanSo ps);

    int SoSanh(PhanSo ps);
};

#endif

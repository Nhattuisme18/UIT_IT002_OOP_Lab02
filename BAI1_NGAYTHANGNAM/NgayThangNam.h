#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

class NgayThangNam {
private:
    int iNgay, iThang, iNam;
    bool LaNamNhuan(int n);
    int SoNgayTrongThang(int t, int n);

public:
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();
};

#endif

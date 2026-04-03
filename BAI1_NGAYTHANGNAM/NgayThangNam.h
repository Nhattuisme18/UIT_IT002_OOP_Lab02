#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H


class NgayThangNam
{
    public:
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();

    private:
        int iNgay, iThang, iNam;
        bool kiemtraNamNhuan(int n);
        int SoNgayTrongThang(int t, int n);
};

#endif 

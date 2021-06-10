#include <iostream>
#include <iomanip>
using namespace std;

class MAY
{
    char MAMAY[10];
    char KIEUMAY[20];
    char TINHTRANG[20];
    public:
    void NHAP();
    void XUAT();
};
class QUANLY
{
    char MAQL[10];
    char TENQL[20];
    public:
    void NHAP();
    void XUAT();
};
class PHONGMAY
{
    char MAPHONG[10];
    char TENPHONG[20];
    QUANLY x;
    MAY *y;
    int n;
    public:
    void NHAP();
    void XUAT();
};
void MAY::NHAP()
{
    cout<<"\nMa May : "; fflush(stdin); gets(MAMAY);
    cout<<"Kieu May: "; fflush(stdin); gets(KIEUMAY);
    cout<<"Tinh Trang: "; fflush(stdin); gets(TINHTRANG);
}
void MAY::XUAT()
{
    cout<<setw(10)<<MAMAY<<setw(20)<<KIEUMAY<<setw(20)<<TINHTRANG<<endl;
}
void QUANLY::NHAP()
{
    cout<<"Ma nguoi quan ly: "; fflush(stdin); gets(MAQL);
    cout<<"Ten nguoi quan ly: "; fflush(stdin); gets(TENQL);
}
void QUANLY::XUAT()
{
    cout<<"Ma nguoi quan ly: "<<MAQL<<endl;
    cout<<"Ten nguoi quan ly: "<<TENQL<<endl;
}
void PHONGMAY::NHAP()
{
    cout<<"Ma phong: "; fflush(stdin); gets(MAPHONG);
    cout<<"Ten phong:"; fflush(stdin); gets(TENPHONG);
    x.NHAP();
    cout<<"Nhap so may:"; cin>>n;
    y=new MAY[n];
    for(int i=0; i<n; i++)
    y[i].NHAP();
}
void PHONGMAY::XUAT()
{
    cout<<endl<<"Ma phong: "<<MAPHONG;
    cout<<". Ten phong: "<<TENPHONG<<endl;
    x.XUAT();
    cout<<setw(10)<<"MA MAY"<<setw(20)<<"KIEU MAY"<<setw(20)<<"TINHTRANG"<<endl;
    for(int i=0; i<n; i++)
        y[i].XUAT();
}
int main()
{
    PHONGMAY a;
    a.NHAP();
    a.XUAT();
    return 0;
}

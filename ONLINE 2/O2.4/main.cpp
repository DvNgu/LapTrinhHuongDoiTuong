#include <iostream>
#include <iomanip>
using namespace std;

class HANG
{
    char TENHANG[20];
    float DONGIA;
    int SOLUONG;
public:
    void NHAP();
    void XUAT();
    friend class PHIEUMUAHANG;
};
class PHIEUMUAHANG
{
    char MAPHIEU[20];
    char NGAYLAP[20];
    HANG *x;
    int n;
public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout<<"Ten hang: "; fflush(stdin); gets(TENHANG);
    cout<<"Don gia: "; cin>>DONGIA;
    cout<<"So luong: "; cin>>SOLUONG;
}
void HANG::XUAT()
{
    cout<<setw(20)<<TENHANG<<setw(10)<<DONGIA<<setw(10)<<SOLUONG<<
    setw(10)<<DONGIA*SOLUONG<<endl;
}
void PHIEUMUAHANG::NHAP()
{
    cout<<"Ma phieu: "; fflush(stdin); gets(MAPHIEU);
    cout<<"Ngay lap: "; fflush(stdin); gets(NGAYLAP);
    cout<<"Nhap so mat hang: "; cin>>n;
    x=new HANG[n];
    for(int i=0; i<n; i++)
        x[i].NHAP();
}
void PHIEUMUAHANG::XUAT()
{
    cout<<"Ma phieu: "<<MAPHIEU<<" ";
    cout<<"Ngay lap: "<<NGAYLAP<<endl;
    cout<<setw(20)<<"TEN HANG"<<setw(10)<<"DON GIA"<<setw(10)<<"SO LUONG"<<setw(10)<<"THANH TIEN"<<endl;
    for(int i=0; i<n; i++)
        x[i].XUAT();
    double TONGTIEN=0;
    for(int i=0; i<n; i++) TONGTIEN += x[i].DONGIA*x[i].SOLUONG;
    cout<<setw(50)<<"Cong thanh tien: "<<TONGTIEN<<endl;
}
int main()
{
    PHIEUMUAHANG a;
    a.NHAP();
    a.XUAT();
    return 0;
}

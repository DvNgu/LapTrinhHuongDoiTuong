#include <iostream>
#include <iomanip>
using namespace std;

class NSX
{
char MANSX[10];
char TENNSX[20];
char DCNSX[20];
public:
void NHAP();
void XUAT();
};
class HANG
{
    char TENHANG[20];
    float DONGIA;
    int SOLUONG;
public:
    void NHAP();
    void XUAT();
    friend class PHIEUNHAPHANG;
};
class PHIEUNHAPHANG
{
    char MAPHIEU[20];
    char NGAYLAP[20];
    NSX y;
    HANG *x;
    int n;
public:
    void NHAP();
    void XUAT();
};
void NSX::NHAP()
{
    cout<<"Ma NSX: "; fflush(stdin); gets(MANSX);
    cout<<"Ten NSX: "; fflush(stdin); gets(TENNSX);
    cout<<"DC NSX: "; fflush(stdin); gets(DCNSX);
}
void NSX::XUAT()
{
    cout<<"Ma NSX: "<<setw(15)<<MANSX;
    cout<<setw(15)<<"Ten NSX: "<<setw(15)<<TENNSX<<endl;
    cout<<"DC NSX: "<<DCNSX<<endl;
}
void HANG::NHAP()
{
    cout<<"Ten hang: "; fflush(stdin); gets(TENHANG);
    cout<<"Don gia: "; cin>>DONGIA;
    cout<<"So luong: "; cin>>SOLUONG;
}
void HANG::XUAT()
{
    cout<<setw(20)<<TENHANG<<setw(10)<<DONGIA<<setw(10)<<SOLUONG<<setw(10)<<DONGIA*SOLUONG<<endl;
}
void PHIEUNHAPHANG::NHAP()
{
    cout<<"Ma phieu: "; fflush(stdin); gets(MAPHIEU);
    cout<<"Ngay lap: "; fflush(stdin); gets(NGAYLAP);
    y.NHAP();
    cout<<"Nhap so mat hang: "; cin>>n;
    x=new HANG[n];
    for(int i=0; i<n; i++)
    x[i].NHAP();
}
void PHIEUNHAPHANG::XUAT()
{
    cout<<setw(40)<<"PHIEU NHAP HANG"<<endl;
    cout<<"Ma phieu: "<<setw(15)<<MAPHIEU;
    cout<<setw(15)<<"Ngay lap: "<<setw(15)<<NGAYLAP<<endl;
    y.XUAT();
    cout<<setw(20)<<"TEN HANG"<<setw(10)<<"DON GIA"<<setw(10)<<"SO LUONG"<<setw(10)<<"THANH TIEN"<<endl;
    for(int i=0; i<n; i++)
    x[i].XUAT();
    double TONGTIEN=0;
    for(int i=0; i<n; i++)
    TONGTIEN += x[i].DONGIA*x[i].SOLUONG;
    cout<<setw(50)<<"Cong thanh tien: "<<TONGTIEN<<endl;
}
int main()
{
    PHIEUNHAPHANG a;
    a.NHAP();
    a.XUAT();
    return 0;
}

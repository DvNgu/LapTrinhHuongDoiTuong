#include <iostream>
#include <iomanip>
using namespace std;

class HANG
{
    char MAHANG[20];
    char TENHANG[20];
    float DONGIA;
public:
    void NHAP();
    void XUAT();
};
class PHIEU
{
    char MAPHIEU[20];
    HANG *x;
    int n;
public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout<<"\nMa Hang : "; fflush(stdin); gets(MAHANG);
    cout<<"Ten Hang: "; fflush(stdin); gets(TENHANG);
    cout<<"Don Gia: "; cin>>DONGIA;
}
void HANG::XUAT()
{
    cout<<setw(10)<<MAHANG;
    cout<<setw(20)<<TENHANG;
    cout<<setw(10)<<DONGIA<<endl;
}
void PHIEU::NHAP()
{
    cout<<"Ma Phieu: "; fflush(stdin); gets(MAPHIEU);
    cout<<"Nhap so mat hang: "; cin>>n;
    x=new HANG[n];
    for(int i=0; i<n; i++)
    x[i].NHAP();
}
void PHIEU::XUAT()
{
    cout<<" Ma Phieu: "<<MAPHIEU<<endl;
    cout<<setw(10)<<"MA HANG";
    cout<<setw(20)<<"TENHANG";
    cout<<setw(10)<<"DONGIA"<<endl;
    for(int i=0; i<n; i++)
        x[i].XUAT();
}
int main()
{
    PHIEU a;
    a.NHAP();
    cout<<endl<<setw(30)<<"PHIEU NHAP HANG"<<endl;
    a.XUAT();
    return 0;
}

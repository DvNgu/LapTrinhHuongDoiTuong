#include <iostream>
#include <iomanip>
using namespace std;

class SINHVIEN
{
    char MASINHVIEN[10];
    char HOTEN[20];
    float TOAN, LY, HOA;
public:
    void NHAP();
    void XUAT();
    friend void SAP(SINHVIEN *a, int n);
};
void SINHVIEN::NHAP()
{
    cout<<"\nMa sinh vien: "; fflush(stdin); gets(MASINHVIEN);
    cout<<"Ho ten: "; fflush(stdin); gets(HOTEN);
    cout<<"Diem toan: "; cin>>TOAN;
    cout<<"Diem ly: "; cin>>LY;
    cout<<"Diem hoa: "; cin>>HOA;
}
void SINHVIEN::XUAT()
{
    cout<<setw(10)<<MASINHVIEN<<setw(20)<<HOTEN<<setw(10)<<TOAN<<setw(10)<<LY<<setw(10)<<HOA<<setw(10)<<TOAN+LY+HOA<<endl;
}
void SAP(SINHVIEN *a, int n)
{
    for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
    if(a[i].TOAN+a[i].LY+a[i].HOA > a[j].TOAN+a[j].LY+a[j].HOA)
    {
        SINHVIEN tg=a[i]; a[i]=a[j]; a[j]=tg;
    }
}
int main()
{
    SINHVIEN *a; int n;
    cout<<"Nhap so sinh vien: "; cin>>n;
    a=new SINHVIEN[n];
    for(int i=0; i<n; i++)
    a[i].NHAP();
    SAP(a,n);
    cout<<setw(10)<<"MASINHVIEN"<<setw(20)<<"HOTEN"<<setw(10)<<"TOAN"<<setw(10)<<"LY"<<setw(10)<<"HOA"<<setw(10)<<"TONG"<<endl;
    for(int i=0; i<n; i++)
    a[i].XUAT();
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

class SINHVIEN
{
    char MASV[20];
    char TENSV[20];
    char LOP[10];
    char KHOA[10];
public:
    void NHAP();
    void XUAT();
};
class MON
{
    char TENMON[20];
    int SOTRINH;
    float DIEM;
public:
    void NHAP();
    void XUAT();
    friend class PHIEUBAODIEM;
};
class PHIEUBAODIEM
{
    SINHVIEN x;
    MON *y;
    int n;
public:
    void NHAP();
    void XUAT();
};
void SINHVIEN::NHAP()
{
    cout<<"Ma sv: "; fflush(stdin); gets(MASV);
    cout<<"Ten sv: "; fflush(stdin); gets(TENSV);
    cout<<"Lop: "; fflush(stdin); gets(LOP);
    cout<<"Khoa: "; fflush(stdin); gets(KHOA);
}
void SINHVIEN::XUAT()
{
    cout<<"Ma sv: "<<MASV<<"\t";
    cout<<"Ten sv: "<<TENSV<<endl;
    cout<<"Lop: "<<LOP<<"\t";
    cout<<"Khoa: "<<KHOA<<endl;
}
void MON::NHAP()
{
    cout<<"Ten mon: "; fflush(stdin); gets(TENMON);
    cout<<"So trinh:"; cin>>SOTRINH;
    cout<<"Diem: "; cin>>DIEM;
}
void MON::XUAT()
{
    cout<<setw(20)<<TENMON<<setw(20)<<SOTRINH<<setw(20)<<DIEM<<endl;
}
void PHIEUBAODIEM::NHAP()
{
    x.NHAP();
    cout<<"Nhap so mon: "; cin>>n;
    y=new MON[n];
    for(int i=0; i<n; i++)
    y[i].NHAP();
}
void PHIEUBAODIEM::XUAT()
{
    cout<<setw(40)<<"PHIEU BAO DIEM"<<endl<<endl;
    x.XUAT();
    cout<<"Bang diem:"<<endl;
    cout<<setw(20)<<"TEN MON"<<setw(20)<<"SO RINH"<<setw(20)<<"DIEM"<<endl;
    for(int i=0; i<n; i++)
        y[i].XUAT();
    float TONGDIEM=0; int TONGSOTRINH=0;
    for(int i=0; i<n; i++)
    {
        TONGDIEM += y[i].DIEM*y[i].SOTRINH;
        TONGSOTRINH += y[i].SOTRINH;
    }
    if(TONGSOTRINH !=0)
        cout<<setw(40)<<"Diem trung binh:"<<TONGDIEM/TONGSOTRINH<<endl;
}
int main()
{
    PHIEUBAODIEM a;
    a.NHAP();
    a.XUAT();
    return 0;
}

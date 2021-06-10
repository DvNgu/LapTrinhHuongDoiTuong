#include <iostream>
#include <iomanip>
using namespace std;

class DATE
{
    int D, M, Y;
    public:
    void NHAP();
    void XUAT();
};
class NHANSU
{
    char MANS[20];
    char HOTEN[30];
    DATE NS;
    public:
    void NHAP();
    void XUAT();
};
void DATE::NHAP()
{
    cout<<"Day: "; cin>>D;
    cout<<"Month: "; cin>>M;
    cout<<"Year: "; cin>>Y;
}
void DATE::XUAT()
{
    cout<<setw(10)<<D<<"/"<<M<<"/"<<Y<<endl;
}
void NHANSU::NHAP()
{
    cout<<"Ma nhan su: "; fflush(stdin); gets(MANS);
    cout<<"Ten nhan su: "; fflush(stdin); gets(HOTEN);
    cout<<"Ngay thang nam sinh:"<<endl;
    NS.NHAP();
}
void NHANSU::XUAT()
{
    cout<<setw(10)<<MANS<<setw(15)<<HOTEN;
    NS.XUAT();
}
int main()
{
    NHANSU x;
    x.NHAP();
    cout<<endl<<"Nhan su vua nhap:"<<endl;
    cout<<setw(10)<<"MANS"<<setw(15)<<"HOTEN"<<setw(15)<<"DATE" <<endl;
    x.XUAT();
    return 0;
}

#include <iostream>

using namespace std;

class NSX
{
    char MANSX[20];
    char TENNSX[20];
    char DCNSX[20];
    public:
    void NHAP();
    void XUAT();
};
class HANG
{
    char MANHANG[20];
    char TENHANG[30];
    NSX x;
    public:
    void NHAP();
    void XUAT();
};
void NSX::NHAP()
{
    cout<<"Ma NSX : "; fflush(stdin); gets(MANSX);
    cout<<"Ten NSX: "; fflush(stdin); gets(TENNSX);
    cout<<"DC NSX: "; fflush(stdin); gets(DCNSX);
}
void NSX::XUAT()
{
    cout<<"Ma NSX : "<<MANSX<<endl;
    cout<<"Ten NSX: "<<TENNSX<<endl;
    cout<<"DC NSX: "<<DCNSX<<endl;
}
void HANG::NHAP()
{
    cout<<"Ma hang: "; fflush(stdin); gets(MANHANG);
    cout<<"Ten hang: "; fflush(stdin); gets(TENHANG);
    cout<<"Nha san xuat:"<<endl;
    x.NHAP();
}
void HANG::XUAT()
{
    cout<<"Ma hang: "<<MANHANG<<endl;
    cout<<"Ten hang: "<<TENHANG<<endl;
    cout<<"Nha san xuat: "<<endl;
    x.XUAT();
}
int main()
{
    HANG x;
    x.NHAP();
    cout<<endl<<"Mat hang vua nhap:"<<endl;
    x.XUAT();
    return 0;
}

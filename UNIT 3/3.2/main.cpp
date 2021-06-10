#include <iostream>

using namespace std;

class NSX
{
    char MANSX[20];
    char TENNSX[20];
    char DCNSX[20];
    friend class HANG; //lop ban
};
class HANG
{
    char MANHANG[20];
    char TENHANG[30];
    float DONGIA, TRONGLUONG;
    NSX x;
public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    cout<<"Ma hang: "; fflush(stdin); gets(MANHANG);
    cout<<"Ten hang: "; fflush(stdin); gets(TENHANG);
    cout<<"Don gia: "; cin>>DONGIA;
    cout<<"Trong luong: "; cin>>TRONGLUONG;
    cout<<"Ma NSX: "; fflush(stdin); gets(x.MANSX);
    cout<<"Ten NSX:"; fflush(stdin); gets(x.TENNSX);
    cout<<"Dia chi:"; fflush(stdin); gets(x.DCNSX);
}
void HANG::XUAT()
{
    cout<<"Ma hang: "<<MANHANG<<endl;
    cout<<"Ten hang: "<<TENHANG<<endl;
    cout<<"Don gia: "<<DONGIA<<endl;
    cout<<"Trong luong: "<<TRONGLUONG<<endl;
    cout<<"Ma NSX: "<<x.MANSX<<endl;
    cout<<"Ten NSX: "<<x.TENNSX<<endl;
    cout<<"Dia chi: "<<x.DCNSX<<endl;
}
int main()
{
    HANG x;
    x.NHAP();
    cout<<endl<<"Mat hang vua nhap:"<<endl;
    x.XUAT();
    return 0;
}

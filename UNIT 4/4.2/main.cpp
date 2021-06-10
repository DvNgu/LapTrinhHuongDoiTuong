#include <iostream>

using namespace std;

class PRINTER
{
protected:
    float TRONGLUONG;
    char HANGSX[20];
    int NAMSX;
    int TOCDO;
};
class DOTPRINTER : public PRINTER
{
    int MATDOKIM;
public:
    void NHAP();
    void XUAT();
};
class LASERPRINTER : public PRINTER
{
    int DOPHANGIAI;
public:
    void NHAP();
    void XUAT();
};
void DOTPRINTER::NHAP()
{
    cout<<"Trong Luong: "; cin>>TRONGLUONG;
    cout<<"Hang SX "; fflush(stdin); gets(HANGSX);
    cout<<"Nam SX: "; cin>>NAMSX;
    cout<<"Toc do: "; cin>>TOCDO;
    cout<<"Mat do kim: "; cin>>MATDOKIM;
}
void DOTPRINTER::XUAT()
{
    cout<<"Trong Luong: "<<TRONGLUONG<<endl;
    cout<<"Hang SX "<<HANGSX<<endl;
    cout<<"Nam SX: "<<NAMSX<<endl;
    cout<<"Toc do: "<<TOCDO<<endl;
    cout<<"Mat do kim: "<<MATDOKIM<<endl<<endl;
}
void LASERPRINTER::NHAP()
{
    cout<<"Trong Luong: "; cin>>TRONGLUONG;
    cout<<"Hang SX "; fflush(stdin); gets(HANGSX);
    cout<<"Nam SX: "; cin>>NAMSX;
    cout<<"Toc do: "; cin>>TOCDO;
    cout<<"Do phan giai: "; cin>>DOPHANGIAI;
}
void LASERPRINTER::XUAT()
{
    cout<<"Trong Luong: "<<TRONGLUONG<<endl;
    cout<<"Hang SX "<<HANGSX<<endl;
    cout<<"Nam SX: "<<NAMSX<<endl;
    cout<<"Toc do: "<<TOCDO<<endl;
    cout<<"Do phan giai: "<<DOPHANGIAI<<endl<<endl;
}
int main()
{
    DOTPRINTER a; LASERPRINTER b;
    cout<<"Nhap thong tin may in KIM:"<<endl;
    a.NHAP();
    cout<<"Nhap thong tin may in LASER:"<<endl;
    b.NHAP();
    cout<<endl<<"May in Kim vua nhap:"<<endl;
    a.XUAT();
    cout<<"May in Laser vua nhap:"<<endl;
    b.XUAT();
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

class ELECTRONIC
{
protected:
    float CONGSUAT;
    int DIENAP;
public:
    ELECTRONIC(float a, int b);
};
class MAYGIAT : public ELECTRONIC
{
    float DUNGTICH;
    char LOAI[20];
public:
    MAYGIAT(float a, int b, float c, char*d);
    void XUAT();
};
class TULANH : public ELECTRONIC
{
    float DUNGTICH;
    int SONGAN;
public:
    TULANH(float a, int b, float c, int d);
    void XUAT();
};
void MAYGIAT::XUAT()
{
    cout<<"Cong suat: "<<CONGSUAT<<endl;
    cout<<"Dien ap : "<<DIENAP<<endl;
    cout<<"Dung tich: "<<DUNGTICH<<endl;
    cout<<"Loai: "<<LOAI<<endl<<endl;
}
void TULANH::XUAT()
{
    cout<<"Cong suat: "<<CONGSUAT<<endl;
    cout<<"Dien ap : "<<DIENAP<<endl;
    cout<<"Dung tich: "<<DUNGTICH<<endl;
    cout<<"So ngan: "<<SONGAN<<endl<<endl;
}
ELECTRONIC::ELECTRONIC(float a, int b)
{
    CONGSUAT = a;
    DIENAP = b;
}
MAYGIAT::MAYGIAT(float a, int b, float c, char*d):ELECTRONIC(a,b)
{
    DUNGTICH = c;
    strcpy(LOAI, d);
}
TULANH::TULANH(float a, int b, float c, int d):ELECTRONIC(a,b)
{
    DUNGTICH = c;
    SONGAN = d;
}
int main()
{
    MAYGIAT a(200, 220, 8, "CUA TRUOC");
    TULANH b(150, 220, 150, 4);
    cout<<"Thong tin may giat:"<<endl;
    a.XUAT();
    cout<<"Thong tin tu lanh:"<<endl;
    b.XUAT();
    return 0;
}

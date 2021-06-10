#include <iostream>

using namespace std;

class PERSON
{
protected:
    char HOTEN[20];
    char NS[12];
    char QUEQUAN[30];
};
class KYSU : public PERSON
{
private:
    char NGANH[20];
    int NAMTN;
public:
    void NHAP();
    void XUAT();
    friend void IN(KYSU *a, int n);
};
void KYSU::NHAP()
{   cout<<"Ho ten: "; fflush(stdin); gets(HOTEN);
    cout<<"Ngay sinh: "; fflush(stdin); gets(NS);
    cout<<"Que quan: "; fflush(stdin); gets(QUEQUAN);
    cout<<"Nganh: "; fflush(stdin); gets(NGANH);
    cout<<"Nam TN: "; cin>>NAMTN;
}
void KYSU::XUAT()
{
    cout<<"Ho ten: "<<HOTEN<<endl;
    cout<<"Ngay sinh: "<<NS<<endl;
    cout<<"Que quan: "<<QUEQUAN<<endl;
    cout<<"Nganh: "<<NGANH<<endl;
    cout<<"Nam TN: "<<NAMTN<<endl<<endl;
}
void IN(KYSU *a, int n)
{
    int MAX=0;
    for(int i=0; i<n; i++)
    if(a[i].NAMTN > MAX) MAX = a[i].NAMTN;
    cout<<"SV TN GAN DAY NHAT:"<<endl;
    for(int i=0; i<n; i++)
    if(a[i].NAMTN==MAX) a[i].XUAT();
}
int main()
{
    KYSU *a; int n;
    cout<<"n="; cin>>n; //n=so ky su
    a = new KYSU[n];
    for(int i=0; i<n; i++)
    a[i].NHAP();
    IN(a, n);
    return 0;
}

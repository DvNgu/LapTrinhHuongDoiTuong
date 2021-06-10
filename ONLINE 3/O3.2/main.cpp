#include <iostream>
#include <fstream>
using namespace std;

class TAMGIAC
{
    float a,b,c;
public:
    float operator!();
    friend istream & operator>>(istream& x, TAMGIAC & y);
    friend ostream& operator<<(ostream& x, TAMGIAC y);
};
float TAMGIAC::operator!()
{
    return a+b+c;
}
istream & operator>>(istream& x, TAMGIAC & y)
{
    x>>y.a;
    x>>y.b;
    x>>y.c;
    return x;
}
ostream& operator<<(ostream& x, TAMGIAC y)
{
    x<<"a="<<y.a<<endl;
    x<<"b="<<y.b<<endl;
    x<<"c="<<y.c<<endl;
    x<<"CV: "<<!y<<endl;
    return x;
}
int main()
{
    TAMGIAC P, Q;
    cout<<"NHAP TAM GIAC P:"<<endl; cin>>P;
    cout<<"NHAP TAM GIAC Q:"<<endl; cin>>Q;
    ofstream f("INOUT.TXT", ios::app);
    f<<P<<endl;
    f<<Q<<endl;
    f.close();
    return 0;
}

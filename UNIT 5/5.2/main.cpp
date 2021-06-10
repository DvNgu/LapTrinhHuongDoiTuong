#include <iostream>

using namespace std;

class SP
{
    float THUC, AO;
public:
    SP(); //hàm tạo không đối
    SP(float x, float y); //hàm tạo có đối
    friend ostream& operator<<(ostream& x, SP y);
    SP operator+(SP y);
    SP operator-(SP y);
};
SP::SP()
{
    THUC = AO = 0;
}
SP::SP(float x, float y)
{
    THUC=x; AO=y;
}
ostream&operator<<(ostream& x, SP y)
{
    x<<y.THUC<<" + i*"<<y.AO;
    return x;
}
SP SP::operator+(SP y)
{
    SP tg;
    tg.THUC = THUC + y.THUC;
    tg.AO = AO + y.AO;
    return tg;
}
SP SP::operator-(SP y)
{
    SP tg;
    tg.THUC = THUC - y.THUC;
    tg.AO = AO - y.AO;
    return tg;
}
int main()
{
    SP P1(3, 5);
    SP P2(2, 4);
    SP P3=P1+P2;
    SP P4=P1-P2;
    cout<<"So phuc P1: "<<P1<<endl;
    cout<<"So phuc P2: "<<P2<<endl;
    cout<<"P1+P2: "<<P3<<endl;
    cout<<"P1-P2: "<<P4<<endl;
    return 0;
}

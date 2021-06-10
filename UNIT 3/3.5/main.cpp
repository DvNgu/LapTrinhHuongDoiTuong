#include <iostream>

using namespace std;

class ARRAY
{
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int x);
    ~ARRAY();
    void NHAP();
    void XUAT();
};
ARRAY::ARRAY()
{
    n=0; VALUE=NULL;
}
ARRAY::ARRAY(int x)
{
    n=x;
    VALUE = new int[n];
    for(int i=0; i<n; i++)
    VALUE[i]=0;
}
ARRAY::~ARRAY()
{
    n=0; VALUE=NULL; //OR: delete [] VALUE;
}
void ARRAY::NHAP()
{
    if(n==0) {cout<<"n="; cin>>n;}
        if(VALUE==NULL) VALUE = new int[n];
            for(int i=0; i<n; i++)
            {
                cout<<"VALUE["<<i<<"]=";
                cin>>VALUE[i];
            }
}
void ARRAY::XUAT()
{
    for(int i=0; i<n; i++)
    cout<<VALUE[i]<<" ";
}
int main()
{
    ARRAY x(8);
    cout<<endl<<"Mang vua khoi tao : ";
    x.XUAT();
    cout<<endl<<"Nhap mang: "<<endl;
    x.NHAP();
    cout<<endl<<"Mang vua nhap: ";
    x.XUAT();
    return 0;
}

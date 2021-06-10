#include <iostream>
using namespace std;

class MANG
{
    float *a;
    int n;
    public:
    void NHAP();
    void XUAT();
    float MAX();
    float MIN();
};
void MANG::NHAP()
{
    cout<<"n= ";
    cin>>n;
    a = new float[n];
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void MANG::XUAT()
{
    cout<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
float MANG::MAX()
{
    float M=a[0];
    for(int i=0; i<n; i++)
        if(a[i]>M)
            M=a[i] ;
    return M;
}
float MANG::MIN()
{
    float M=a[0];
    for(int i=0; i<n; i++)
        if(a[i]<M)
            M=a[i];
    return M;
}
int main()
{
    MANG x;
    x.NHAP();
    cout << "============================="<<endl;
    cout<<"Mang vua nhap:"<<endl;
    x.XUAT();
    cout<<"MAX="<<x.MAX()<<" MIN="<<x.MIN();
    return 0;
}

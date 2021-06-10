#include <iostream>
#include <iomanip>
using namespace std;

template <class T> class MATRIX
{
    int n, m;
    T **a;
public:
    void nhap();
    void xuat();
    MATRIX operator!();
};
template <class T> void MATRIX<T>::nhap()
{
    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    a = new T*[n];
    for(int i=0; i<n; i++)
        a[i]=new T[m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
}
template <class T> void MATRIX<T>::xuat()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        cout<<setw(4)<<a[i][j];
        cout<<endl;
    }
}
template <class T> MATRIX<T> MATRIX<T>::operator!()
{
    MATRIX TG;
    TG.n = m;
    TG.m = n;
    TG.a = new T*[TG.n];
    for(int i=0; i<TG.n; i++)
    TG.a[i] = new T[TG.m];
    for(int i=0; i<TG.n; i++)
    for(int j=0; j<TG.m; j++)
    TG.a[i][j] = a[j][i];
    return TG;
}
int main()
{
    MATRIX<double> P;
    P.nhap();
    P = !P;
    P.xuat();
    MATRIX<long> Q;
    Q.nhap();
    Q = !Q;
    Q.xuat();
}

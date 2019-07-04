#include<iostream>
#include<cmath>
using namespace std;
int giai_thua(int a){
    if (a == 1) return 1;
    return a * giai_thua(a-1);
}
int main()
{
    int x,n; float s = 0;
    cout<<"Nhap x: ";cin>>x;
    cout<<"Nhap n: ";cin>>n;

    for(int i = 0; i<= n; i++)
    {
        int tu = pow(x,2*i+1);
        int mau = giai_thua(2*i+1);
        s += tu/mau;
    }
    cout << "S(" << x << "," << n << ") = " << s;
}
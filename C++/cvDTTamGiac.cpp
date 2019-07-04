#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, cv;
    float p, dt;

    cout << "Nhap canh a: ";cin >> a;
    cout << "Nhap canh b: ";cin >> b;
    cout << "Nhap canh c: ";cin >> c;
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "3 canh tren khong phai la 1 tam giac";
    else
    {
        cv = a + b + c;
        p = cv / 2.0;
        dt = sqrt(p * (p - a) * (p - b) * (p - c));

        cout << "Chu vi tam giac: " << cv << endl;
        cout << "Dien tich tam giac: " << dt << endl;
    }
    return 0;
}

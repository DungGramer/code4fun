#include <iostream>
#include <cmath>
using namespace std;

int giaiThua(int x)
{
    if (x == 1) return 1;
    return x * giaiThua(x - 1);
}

int main()
{
    cout << "Nhap x: ";
    int x, n;
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        float tu = pow(x, i);
        int mau = giaiThua(i);
        s += tu / mau;
    }
    cout << "S(" << x << "," << n << ") = " << s;
}
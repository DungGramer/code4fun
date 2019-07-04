#include <iostream>
using namespace std;
int main()
{
    int n, uoc = 0, i = 1;

    cout << "Nhap n: ";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
            uoc += i;
        i++;
    }
    if (uoc == n) cout << n << " la so hoan hao";
    else cout << n << " khong phai la so hoan hao";
}
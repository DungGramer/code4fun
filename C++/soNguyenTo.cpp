#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0){
            count++;
        }
    }
    if (count == 2)
        cout << n << " la so nguyen to";
    else
        cout << n << " khong phai la so nguyen to";
    return 0;
}
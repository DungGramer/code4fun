#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Nhap n: "; cin >> n;
    do
    {
        int sd = n % 10;
        n /= 10;
        sum += sd;
    } while (n > 0);
    cout << "Tong cac chu so: " << sum;
    return 0;
}
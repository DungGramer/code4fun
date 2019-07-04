#include <iostream>
using namespace std;
int main()
{
    int tram, chuc, donvi;
    cout << "Nhap so co 3 chu so: "; int n; cin >> n;
    while (n < 100 || n > 999)
    {
        cout << "Nhap lai n: ";
        cin >> n;
    }
    tram = n / 100;
    chuc = (n / 10) % 10;
    donvi = n % 10;
    cout << "So dao nguoc: " << donvi << chuc << tram;
    return 0;
}
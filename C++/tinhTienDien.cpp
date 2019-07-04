#include <iostream>
using namespace std;
int main()
{
    cout << "Nhap so kWh: ";
    int kWh;
    cin >> kWh;
    int money,g1 = 600,g2 = 700,g3 = 900, g4 = 1100 ;

    if (kWh <= 100 && kWh >= 0) money = g1 * kWh;
    else if(kWh >= 101 && kWh <= 150) money = 100 * g1 + (kWh - 100) * g2 ;
    else if(kWh >= 151 && kWh <= 200) money = 100 * g1 + 50 * g2 + (kWh - 150) * g3;
    else money = 100 * g1 + 50 * g2 + 50 * g3 + (kWh - 200) * g4;
    
    cout << "Tien dien phai tra: " << money << " vnd" << endl;
}
#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    cout << "Nhap r: "; int r; cin >> r;
    float cv = 2 * PI * r;
    float dt = PI * r * r;
    cout << "Chu vi: " << cv << endl;
    cout << "Dien tich: " << dt << endl;
    return 0;
}
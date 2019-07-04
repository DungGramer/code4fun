#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{

    cout << "Nhap n: ";
    int n;
    cin >> n;
    cout << "Nhap x: ";
    float x;
    cin >> x;

    int KQ = pow(x*x+x+1,n)+pow(x*x-x+1,n);
    printf("(%.1f^2 + %.1f + 1)^%d + (%.1f^2 - %.1f + 1)^%d = %d",x,x,n,x,x,n,KQ);
}
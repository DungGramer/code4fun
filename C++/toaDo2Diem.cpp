#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int xA, yA, xB, yB;
    cout<<"Nhap toa do diem A: \n";
    cout<<"xA: ";cin>>xA;
    cout<<"yA: ";cin>>yA;
    cout<<"Nhap toa do diem B: \n";
    cout<<"xB: ";cin>>xB;
    cout<<"yB: ";cin>>yB;

    
    cout<<"Do dai doan AB: "<<abs(sqrt(pow(xB - xA,2)+pow(yB - yA,2)))<<endl;

}
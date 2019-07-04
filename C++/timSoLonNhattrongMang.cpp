#include<iostream>
#define M 100
using namespace std;
int main(){
    int n,max;
    int arr[M];

    cout<<"Nhap so luong phan tu: ";cin>>n;
    for(int i = 0;i < n;i++){
        cout<<"arr["<<i+1<<"] = ";
        cin>>arr[i];
    }
    for(int i = 0; i < n;i++){
        if(arr[i] < arr[i+1]){
            max = arr[i+1];
        }
    }
    cout<<"Phan tu lon nhat trong mang: "<<max;
return 0;
}
#include<iostream>
#define MAX 100
using namespace std;
void nhapMang(int n, int arr[]){
    for(int i = 0;i < n;i++)
    {
        cout<<"arr["<<i+1<<"] = ";cin>>arr[i];
    }
}
void xuatMang(int n, int arr[]){
    for(int i = 0; i < n; i++)
    {
        cout<<"arr["<<i+1<<"] = "<<arr[i]<<endl;
    }
}
int main()
{
    int n, k, arr[MAX]; char select;
    cout<<"Nhap n: ";cin>>n;
    while( n <= 0){system("clear");cout<<"Nhap lai n: ";cin>>n;}
    nhapMang(n,arr);
    system("clear");
    
    cout<<"Mang da nhap: "<<endl;
    xuatMang(n, arr);
    
    cout<<"Ban co muon sap xep mang khong(y/n) ?\n";cin>>select;
    if(select == 'y')
    {
    system("clear");
    cout<<"Chon thu tu muon sap xep: "<<endl
        <<"1. Tu be den lon"<<endl
        <<"2. Tu lon den be"<<endl   
        <<"Moi nhap: ";cin>>k;
    switch(k)
    {
        case 1:
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = i+1; j < n;j++)
                {
                    if(arr[i] > arr[j])
                    {
                        int temp;
                        temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
                    }
                }
            }
            system("clear");
            cout<<"Mang da sap xep tu be den lon:"<<endl;
            xuatMang(n,arr);
            break;
        }
        case 2:
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = i + 1;j < n; j++)
                {
                    if(arr[i] < arr[j])
                    {
                    int temp;
                    temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
                    }
                }
            }
            system("clear");
            cout<<"Mang da sap xep tu be den lon:"<<endl;
            xuatMang(n,arr);
            break;
        }
        default:
        {
            cout<<"Ban da nhap sai cu phap(Chon 1 hoac 2).";
            break;
        }
    }
    }
    else{cout<<"GOOD BYE!";}
    return 0;
}
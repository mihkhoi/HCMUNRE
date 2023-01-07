#include<iostream>
using namespace std;
#define MAX 100

void nhap(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              cout << "a["<<i<<"]= ";
              cin >> a[i];
       }
}

void xuat(int a[], int n)
{
       cout << "Mang vua nhap: ";
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}

int main()
{
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       return 0;
}
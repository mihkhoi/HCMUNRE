#include<iostream>
using namespace std;

void nhap(int a[], int n)
{
       for(int i = 0; i < n;i++)
       {
              cout << "a["<<i<<"]= ";
              cin >> a[i];
       }
}

void xuat(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              cout << a[i] << " ";
       }
}

int main()
{
       int a[100], n;
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       return 0;
}
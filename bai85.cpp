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

void xoax(int a[], int n )
{
       int x, d;
       cout << "Nhap so muon xoa: ";
       cin >> x;
       for(int i = 0;i < n;i++)
       {
              if(x == a[i])
              {
                     d = i;
              }
       }
       for(int i = d;i < n-1;i++)
       {
              a[i] = a[i + 1];
       }
       n--;
       xuat(a,n);
}

int main()
{
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\n";
       xoax(a,n);
       return 0;
}
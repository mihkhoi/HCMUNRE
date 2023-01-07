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

int tpt(int a[], int n, int x)
{
       for(int i = 0;i < n;i++)
       {
              if(a[i] == x)
              {
                     return i;
              }
       }
       return -1;
}

void xpt(int a[], int &n, int x)
{
       for(int i = x;i < n;i++)
       {
              a[i] = a[i + 1];
       }
       n--;
}

void xtcpt(int a[], int &n, int y)
{
       int i = 0;
       while(i < n)
       {
              if(a[i] == y)
              {
                     xpt(a,n,i);
              }
              else
              {
                     i++;
              }
       }
}

int main()
{
       int a[MAX], n, y;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       cout << "\n" << "Nhap gia tri muon xoa: ";
       cin >> y;
       xtcpt(a,n,y);
       xuat(a,n);
       return 0;
}
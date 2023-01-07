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

void tpt(int a[], int n)
{
       int x = 2;
       int k;
       cout << "Nhap vi tri muon them: ";
       cin >> k;
       for(int i = n + 1;i > k;i--)
       {
              a[i] = a[i -1];
       }
       a[k] = x;
       n++;
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
       tpt(a,n);
       return 0;
}
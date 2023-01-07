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

void tsvtd(int a[], int n)
{
       int x;
       cout << "\n" << "Nhap so muon them: ";
       cin >> x;
       for(int i = n + 1;i > 1;i--)
       {
              a[i] = a[i-1];
       }
       a[1] = x;
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
       tsvtd(a,n);
       return 0;
}
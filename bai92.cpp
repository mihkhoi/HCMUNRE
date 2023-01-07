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

int max(int a[], int n)
{
       int max = a[0];
       for(int i = 0;i < n;i++)
       {
              if(a[i] > max)
              {
                     max = a[i];
              }
       }
       return max;
}

int min(int a[], int n)
{
       int min = 0;
       for(int i = 0;i < n;i++)
       {
              if(a[i] < min)
              {
                     min = a[i];
              }
       }
       return min;
}

void xoamax(int a[], int n)
{
       for(int i = max(a,n);i < n - 1;i++)
       {
              a[i] = a[i + 1];
       }
       n--;
       xuat(a,n);
}

void xoamin(int a[], int n)
{
       for(int i = min(a,n);i < n - 1;i++)
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
       cout << "\nXoa so max: "; 
       xoamax(a,n);
       cout << "\nXoa so min: ";
       xoamin(a,n);
       return 0;
}
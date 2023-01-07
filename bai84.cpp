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

void tptsm(int a[], int n)
{
       int x;
       cout << "Nhap so can them: ";
       cin >> x;
       for(int i = 0;i < n;i++)
       {
              if(a[i] == max(a,n))
              {
                     for(int j = n;j >= i+2;j--)
                     {
                            a[j] = a[j - 1];
                     }
                     a[i + 1] = x;
                     n++;
                     i++;
              }
       }
       xuat(a,n);
}

int main()
{
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       max(a,n);
       cout << "\n";
       tptsm(a,n);
       return 0;
}
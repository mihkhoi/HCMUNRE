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

void stc(int a[], int n)
{
       int x;
       for(int i = 0;i < n;i++)
       {
             if((a[i]%100)/10 != 0)
             {
                     cout << "\n" << a[i] << " ";
             }
       }
}

int main()
{
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       xuat(a,n);
       stc(a,n);
       return 0;
}
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

void chen(int a[], int &n, int x, int k)
{
       n++;
       for(int i = n - 1;i > k;i--)
       {
              a[i] = a[i-1];
       }
       a[k] = x;
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
       int a[MAX], n;
       cout << "Nhap so phan tu cua mang: ";
       cin >> n;
       nhap(a,n);
       int k, x;
       cout << endl << "Nhap vi tri can chen: ";
       cin >> k;
       cout << "Nhap so can chen: ";
       cin >> x;
       chen(a,n,x,k);
       xuat(a,n);
       return 0;
}
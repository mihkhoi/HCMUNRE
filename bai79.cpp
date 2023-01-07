#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 100


void ramdon(int a[], int n)
{
       for(int i = 0;i < n;i++)
       {
              a[i] = rand()%1000;
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
       ramdon(a,n);
       xuat(a,n);
       return 0;
}
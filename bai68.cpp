#include<iostream>
using namespace std;

void cp(int n)
{
       int i = 1, j, d = 0;
       int cp = 0;
       while(d < n)
       {
              cp = 0;
              for(j = 1;j <= i;j++)
              {
                     if(j*j == i)
                     {
                            cp = 1;
                     }
              }
              if(cp == 1)
              {
                     cout << i << " ";
                     d++;
              }
              i++;
       }
}

int main()
{
       int n;
       cin >> n;
       cout << "Cac so chinh phuong dau tien: ";
       cp(n);
       return 0;
}
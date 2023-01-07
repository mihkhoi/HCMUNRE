#include<iostream>
using namespace std;
int ktshh(int n)
{
       int s = 0;
       for(int i = 1;i < n;i++)
       {
              if(n%i == 0)
              {
                     s = s + i;
              }
       }
       return s;
}
int main()
{
       int n;
       cin >> n;
       if(ktshh(n) == n)
       {
              cout << n << " la so hoan hao";
       }
       else
       {
              exit;
       }
       return 0;
}
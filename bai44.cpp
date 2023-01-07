#include<iostream>
using namespace std;
int main()
{
       char n;
       cin >> n;
       if(n >= 'a' && n <= 'z')
       {
              cout << n << " la ki tu thuong";
       }
       else if(n >= 'A' && n <= 'Z')
       {
              cout << n << " la ki tu in hoa";
       }
       else
       {
              cout << n << " la ki tu khac";
       }
       return 0;
}
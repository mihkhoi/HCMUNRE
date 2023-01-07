#include<iostream>
using namespace std;
int main()
{
       double a, b, c;
       cin >> a >> b >> c;
       if((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (b + c > a) && (a + c > b))
       {
              if(a == b && b == c && c == a)
              {
                     cout << "Tam giac deu";
              }
              else if((a == b) || (b == c) || (c == a))
              {
                     cout << "Tam giac can";
              }
              else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
              {
                     cout << "Tam giac vuong";
              }
              else if(((a*a == b*b + c*c) && (b == c)) || ((b*b == a*a + c*c) && ( a == c)) || ((c*c == a*a + b*b) && (a == b)))
              {
                     cout << "Tam giac vuong can";
              }
              else if((a*a > b*b + c*c) || (b*b > a*a + c*c) || (c*c > a*a + b*b))
              {
                     cout << "Tam giac tu";
              }
              else if((a*a < b*b + c*c) || (b*b < a*a + c*c) || (c*c < a*a + b*b))
              {
                     cout << "Tam giac nhon";
              }
              else
              {
                     cout << "Tam giac thuong";
              }
       }
       else
       {
              cout << "khong la tam giac nao het";
       }
       return 0;
}
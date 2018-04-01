//1!+2!+3!+...+10!=
#include <iostream>
using namespace std;
int main()
{
   int i,s,sum;
   s=1;
   sum=1;
   for (i=1; i<=10;i++)
   {
     s*=i;
     sum+=s;
   }
   cout<<sum<<endl;
   return 0;
}

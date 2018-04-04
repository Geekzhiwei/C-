#include <iostream>
using namespace std;
int main()
{
   int i,s=1,sum=0,n;
   cin>>n;
   for (i=1; i<=n;i++)
   {
     s*=i;
     sum+=s;
   }
   cout<<sum<<endl;
   system("pause");
   return 0;
}

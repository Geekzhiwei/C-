//水仙花数
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    for(n=100; n<1000; n++)
    {
        a=n/100;
        b=n/10%10;
        c=n%10;
        if(n==a*a*a+b*b*b+c*c*c)
            cout<<"水仙花数是："<<n<<endl;
    }
    system("pause");
    return 0;
}

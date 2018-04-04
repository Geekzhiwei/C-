#include <iostream>
using namespace std;
int main()
{
    int x,i=2;
    cout<<"请输入一个整数:";
    cin>>x;
    for (;i<x;i++)
    {
        if (x%i==0)
            break;
    }
    if (i==x)
        cout<<x<<"是质数"<<endl;
    else
        cout<<x<<"不是质数"<<endl;
    system("pause");
    return 0;
}

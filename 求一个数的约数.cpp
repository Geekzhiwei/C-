//定义一个函数（在主函数中调用），求一个数的全部约数，
#include <iostream>
using namespace std;
void d(int n)
{
     for(int i=1;i<n;i++)
	{
	   if(n%i==0)
	   cout<<i<<" ";
	}
	cout<<n;
}
int main()
{
    int n;
    cout<<"输入一个数:";
    cin>>n;
    cout<<"全部约数为:";
    d(n);
    system("pause");
    return 0;   
}

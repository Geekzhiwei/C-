//定义一个10个元素的一维数组，输出元素，要求每个行有五个元素(用循环)
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,a[10];
    cout<<"请输入一个10个元素的一维数组：";
    for(i=0; i<10; i++)
        cin>>a[i];
    for(i=0; i<5; i++)
    {
        cout<<setw(3)<<a[i];
    }
    cout<<endl;
    for(j=5; j<10; j++)
        cout<<setw(3)<<a[j];
    cout<<endl;
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;
int max(int a[]);
int main()
{
    int b[10];
    int max_num;
    cout<<"请输入一个10元素的一维数组:";
    for(int i=0; i<10; i++)
        cin>>b[i];
    max_num=max(b);
    cout<<"最大的元素是:"<<max_num<<endl;
    return 0;
}

int max(int a[])
{
    int max_num=a[0];
    for(int i=0; i<10; i++)
        {
            if(a[i]>max_num)
            max_num=a[i];
        }
    return max_num;
}

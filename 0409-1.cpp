//定义一个10个元素的一维数组，输出元素，要求每个行有五个元素(用循环)
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<5;i++)
		{
		cout<<setw(3)<<a[i];
	}
	cout<<endl;
	for(int j=5;j<10;j++)
		cout<<setw(3)<<a[j];
	cout<<endl;
  system("pause");
	return 0;
}

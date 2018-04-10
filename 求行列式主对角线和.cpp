//定义5行5列数组，求主对角线和。
#include <iostream>
using namespace std;
int main()
{
	int i,j,s=0,a[5][5];
	cout<<"请输入一个5行5列的二维数组：";
	for(i=0;i<5;i++)
	{
	  for(j=0;j<5;j++)
		  cin>>a[i][j];
	}
	for(i=0;i<5;i++)
		s+=a[i][i];
	cout<<s<<endl;
	system("pause");
	return 0;
}

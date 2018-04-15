#include <iostream>
using namespace std;
int main()
{
	int i,j,n=7,a[7][7];
	for(i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
		for(j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<=i;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	system("pause");
	return 0;
}

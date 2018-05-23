#include <iostream>
using namespace std;
class Box
{
public:
	Box(int length,int width,int height);
	void display_volume();
private:
	int volume;
};

Box::Box(int length,int width,int height)
{
	volume=length*width*height;
}
void Box::display_volume()
{
	cout<<"The volume is:"<<volume<<endl;
}

int main()
{
	Box v1(25,20,12);
	v1.display_volume();
}

#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;
public:
    Circle();
    Circle(float r);
    Circle(Circle &C);
    float Area();
    float Girth();
};

Circle::Circle(float r)
{
    radius=r;
}

float Circle::Area()
{
    return 3.14*radius*radius;
}

float Circle::Girth()
{
    return 2*3.14*radius;
}

int main()
{
    float x;
    cin>>x;
    Circle c1(x);
    cout<<"面积:"<<c1.Area()<<endl;
    cout<<"周长:"<<c1.Girth()<<endl;
    cin>>x;
    Circle c2(2*x);
    cout<<"面积:"<<c2.Area()<<endl;
    cout<<"周长:"<<c2.Girth()<<endl;
    cin>>x;
    Circle c3(x);
    cout<<"面积:"<<c3.Area()<<endl;
    cout<<"周长:"<<c3.Girth()<<endl;
}

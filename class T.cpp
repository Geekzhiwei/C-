#include <iostream>
using namespace std;
class T
{
    int x,y;
public:
    T();
    T(int X,int Y);
    int get_sum();
    void show();
};

T::T()
{
    x=0;
    y=0;
}

T::T(int X,int Y)
{
    x=X;
    y=Y;
}

int T::get_sum()
{
    return x+y;
}

void T::show()
{
    cout<<x<<"+"<<y<<"="<<x+y;
}

int main()
{
    T t(100,60);
    t.show();
    return 0;
}

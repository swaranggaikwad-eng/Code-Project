#include <iostream>
using namespace std;

class Sample
{
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    friend int sum(Sample s);
};

int sum(Sample s)
{
    return s.a + s.b;
}

int main()
{
    Sample obj;
    obj.set(24, 12);

    cout << "Sum = " << sum(obj);
    return 0;
}

#include <iostream>
using namespace std;

class Test
{
    static int count;

public:
    static void show()
    {
        count++;
        cout << "Count = " << count << endl;
    }
};

int Test::count = 0;

int main()
{
    Test::show();
    Test::show();
    return 0;
}

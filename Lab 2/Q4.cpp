#include <iostream>
using namespace std;

class Binary
{
    int n, a[20], i;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void convert()
    {
        i = 0;

        while (n > 0)
        {
            a[i] = n % 2;
            n = n / 2;
            i++;
        }

        cout << "Binary equivalent = ";

        for (i = i - 1; i >= 0; i--)
        {
            cout << a[i];
        }

        cout << endl;
    }
};

int main()
{
    Binary obj;

    obj.input();
    obj.convert();

    return 0;
}
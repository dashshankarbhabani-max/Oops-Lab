#include <iostream>
using namespace std;

class Array
{
    int a[20], b[20], n;

public:
    void input()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void reverseCopy()
    {
        for (int i = 0; i < n; i++)
        {
            b[i] = a[n - 1 - i];
        }

        cout << "Reverse array = ";

        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Array obj;

    obj.input();
    obj.reverseCopy();

    return 0;
}
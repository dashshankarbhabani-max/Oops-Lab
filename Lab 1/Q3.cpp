#include <iostream>
using namespace std;
class Sum
{
    int n, sum;

public:
    void input()
    {
        cout << "Enter n: ";
        cin >> n;
    }
    void calculate()
    {
        sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }

        cout << "Sum from 1 to " << n << " = " << sum << endl;
    }
};
int main()
{
    Sum obj;

    obj.input();
    obj.calculate();

    return 0;
}
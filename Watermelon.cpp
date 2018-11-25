#include <iostream>

using namespace std;

bool equalWeight(int weight)
{
    if(weight <= 2)
    {
        return false;
    }

    return weight % 2 == 0;
}

int main()
{
    int input;
    cin >> input;

    cout << (equalWeight(input) ? "YES" : "NO") << '\n';
}
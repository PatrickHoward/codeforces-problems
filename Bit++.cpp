//Bit++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int value = 0;
    string instruction;

    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> instruction;
        if(instruction == "++X" || instruction == "X++")
        {
            ++value;
        }
        else if(instruction == "--X" || instruction == "X--")
        {
            --value;
        }
    }

    cout << value << "\n";
}

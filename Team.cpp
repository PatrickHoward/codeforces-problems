//Team
#include <iostream>

using namespace std;

int main()
{
    int n;
    int petya;
    int vasya;
    int tonya;

    int solvedProblems = 0;

    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> petya >> vasya >> tonya;
        if(petya + vasya + tonya >= 2)
        {
            ++solvedProblems;
        }
    }
    cout << solvedProblems;
}

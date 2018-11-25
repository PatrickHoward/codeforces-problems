#include <iostream>
#include <string>

using namespace std;

string shorten(string word)
{
    if(word.length() > 10)
    {
        int newLength = word.length() - 2;
        return word.front() + to_string(newLength) + word.back();
    }

    return word;
}

int main()
{
    int n;
    string input;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        cout << shorten(input) << '\n';
    }
}
//Queue at the school

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int t;

    string queue;

    cin >> n >> t >> queue;

    for(int i = 1; i <= t; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(queue[j] == 'B')
            {
                if(queue[j + 1] == 'G')
                {
                    queue[j] = 'G';
                    queue[++j] = 'B';
                }
            }

        }
    }

    cout << queue;
}

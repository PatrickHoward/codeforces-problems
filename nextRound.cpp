#include <iostream>

using namespace std;

int numberOfContestantsMovingOn(int n, int k, int scores[])
{
    int contestantsMovingOn = 0;
    int kthPlaceScore = scores[k-1];

    for(int i = 0; i < n; ++i)
    {
        if(scores[i] >= kthPlaceScore && scores[i] > 0)
        {
            ++contestantsMovingOn;
        }
    }

    return contestantsMovingOn;
}

int main()
{
    int n;
    int k;

    cin >> n >> k;

    int scores[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }

    cout << numberOfContestantsMovingOn(n, k, scores) << '\n';

}
#include <iostream>
#include <math.h>

using namespace std;

long long flagstonesNeeded(int n, int m, int a)
{
    long long aNeededForM = ceil((float)m / (float)a);
    long long aNeededForN = ceil((float)n / (float)a);
    
    return aNeededForM * aNeededForN;
}

int main()
{
    int n;
    int m; 
    int a;

    cin >> n >> m >> a;
    cout << flagstonesNeeded(n, m, a) << '\n';

}
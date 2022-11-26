
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;
    int m1 = 0, m2 = x, m3;

    while (n > 0)
    {
        cin >> x;
        m3 = max(m1 + x, m2);
        m1 = m2;
        m2 = m3;
        n--;
    }

    cout << m3;

    return 0;
}

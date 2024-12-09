#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a;
    cin >> a;
    cout << fixed << setprecision(2) << a * 2 * 3.14 << " " << a * a * 3.14;
    return 0;
}
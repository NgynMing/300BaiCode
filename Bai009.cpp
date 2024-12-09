#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << ( ( a * 2 ) + ( b * 2 ) + c ) / 5;
    return 0;
}
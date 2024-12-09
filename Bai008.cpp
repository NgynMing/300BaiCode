#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c,cv,p,S;
    cin >> a >> b >> c;
    cv = a + b + c;
    p = cv / 2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed  << setprecision(3) <<  ( a * b * c ) / ( 4 * S );
    return 0;
}
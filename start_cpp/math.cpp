//C++ <cmath> Header
//functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file:
#include <iostream> //we use iostream for using cout
#include <cmath>

using namespace std;
int main() {
    int a=5;
    int b=7;
    cout << sqrt(64) <<endl;
    cout << round(65.4) << endl;
    cout << log(2) << endl;
    cout << max(34,84) << endl;
    cout << min(20,10) << endl;
    cout << max(a,b);
    return 0; 
}
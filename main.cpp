#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter X: " << endl;//1
    int x;
    cin >> x;
    cout << pow(3 * x, 2) + pow(x, 3) - 2 << endl;


    cout << "Enter X: " << endl;//2
    cin >> x;
    cout.precision(3);
    cout << float(abs(x - 8) - sqrt(x + 3)) << endl;

    bool k, l, m, n;    //3
    bool g;
    cout << "Vvedite k, l, m, n" << endl;
    cin >> k >> l >> m >> n;
    g = (!n || (!l xor k) && m);
    
    cout.setf(ios::boolalpha);
    bool log_false = 0,
        log_true = 1;
    cout << g << endl;
    cout << "Enter X, x^2: " << endl;//4
    int h=0;
    short int b;
    cin >> b;
    h = pow(2, b);
    
    cout << dec << noshowpos << h << endl;
    cout << oct << h << endl;

    unsigned short int f, e, c, d, j;//5
    cout << "Vvedite f, e, c, d" << endl;
    cin >> f >> e >> c >> d;
    j = ((~f | e) & (c xor ~d));
    cout << hex << setw(2) << showbase << j << endl;
    return 0;
}

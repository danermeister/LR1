#include <iostream>
#include <cmath>
using namespace std;
int main() {
    std::cout << "Hello!" <<std::endl;//1
    int x;
    std::cin>>x;
    std::cout<<pow(3*x,2)+pow(x,3)-2<<std::endl;


    cout << "Hello!!" << endl;//2
    int a;
    cin >> a;
    std::cout.precision(3);
    std::cout<< float(abs(a - 8) - sqrt(a + 3))<<std::endl;

       std::cout << "Hello!!!" << std::endl;//3
    int k, l, m, n;
    bool g;
    std::cout << "Vvedite k, l, m, n" << std::endl;
    std::cin >> k >> l >> m >> n;
    g = (!n || (!l xor k) && m);
    if (g == 1) { std::cout << "True"<<std::endl; }
    else { std::cout << "False"<<std::endl; }

    std::cout << "Hello!!!!"<<std::endl;//4
    short int b;
    std::cin>>b;
    std::cout<<pow(2,b)<<std::endl;

    std::cout << "Hello!!!!!"<<std::endl;//5
    unsigned short f ,e ,c , d;
    std::cout <<"Vvedite f, e, c, d"<<std::endl;
    std::cin>>f>>e>>c>>d;
    std::cout<<((~f|e)&(c xor ~d))<<std::endl;
     return 0;


}

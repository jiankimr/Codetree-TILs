#include <iostream>
using namespace std;

int main() {
    int weight = 13;
    double moon = 0.165;
    
    cout << fixed;
    cout << weight << " * ";

    cout.precision(6);
    cout <<  moon << " = " <<weight*moon ;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int sum = a+b+c;
    int mean = (a+b+c)/3;
    cout<<sum<<endl;
    cout<<mean<<endl;
    cout<< sum - mean;
    return 0;
}
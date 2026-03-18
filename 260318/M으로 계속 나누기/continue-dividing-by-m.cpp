#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;

    while (N!=0){
        N /= M;
        cout << N <<endl;
    }
    return 0;
}

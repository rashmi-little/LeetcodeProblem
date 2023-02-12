#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x = 98;
    float y = log2(x);
    if (y == (int) y)
    cout <<"integer"<<endl;
    else
    cout << "Not a integer"<< endl;
}
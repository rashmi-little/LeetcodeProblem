#include <iostream> 
using namespace std;
int main() {
    int element;
    cout << "Enter the number of element in you want to put in the array" << endl;
    cin >> element;
    int arr[element];
    for (int i = 0;i < element;i++) { 
        cout << "Enter the array element" << endl;
        cin >> arr[i];
    }
    cout << "The array looks like" << endl;
    for (auto x : arr) {
        cout << x << " ";
    }

    int position;
    cout << "Enter the number of position you want to rotate array" << endl;
    cin >> position;
    
    int brr [element];
    for (int i = 0;i < element;i++) {
        if((i+position) < element)
        brr[i+position] = arr[i];
        else
        brr[(i+position)% position] = arr[i];
    }
    cout << "After " << position << " number of rotation the array will looks like " << endl;
    for (int x : brr) {
        cout << x << " ";
    }
}
#include <iostream>
using namespace std;
int perfectInsetPosition(int* arr,int size,int target) {
    int left = 0;
    int right = size -1;
    if(target < arr[left]) {
        return 0;
    }
    else if(target > arr[right])
    return size;
    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] == target)
        return mid;
        else if (target > arr[mid] && target < arr[mid +1])
        return mid+1;
        else if (target > arr[mid -1] && target < arr[mid])
        return mid;
        else if (arr[mid] > target)
        right = mid -1;
        else 
        left = mid +1;
    }
    return 1000;
}
int main() {
    int arr[] = {1,3};
    int target = 3;
    cout<< perfectInsetPosition(arr,2,target);
}
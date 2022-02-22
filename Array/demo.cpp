// This file is just for testing purpose

#include<iostream>
using namespace std;

int main() {

    int k = 1;
    int arr[] = {1,2,3,4,5,6,7,8};

    cout << sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < k - 1; i++){
        cout << arr[i] << "\n";
    }
}
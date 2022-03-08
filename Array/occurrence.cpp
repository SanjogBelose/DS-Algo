#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 9;

    int first = -1;
    int last = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            first = i;
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            last = i;
        }
    }

    cout << first << "\n";
    cout << last << "\n";
}
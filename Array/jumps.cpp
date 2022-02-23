//Minimum number of jumps

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}; 
    //int arr[] = {1, 4, 3, 2, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    int i = 0;
    int temp = arr[0];
    int a = 0;

    while(i < n-1){
        i = i + temp;
        temp = arr[i];
        if ( temp == 0){
            break;
        }
        a += 1;
    }

    if(temp == 0){
        a = -1;
    }
    
        cout << a << "\n";
  
}
#include<iostream>
using namespace std;

int main() {

    int n = 5;
    int zero = 0;
    int ones = 0;
    int twos = 0;
    int temp = 0;
    int a[] = {0,2,1,2,0};

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            zero += 1;
        }
        else if(a[i] == 1){
            ones += 1;
        }
        else {
            twos += 1;
        }
    }

    int range = zero + ones - 1;

    for(int i = 0; i < zero; i++){
        a[i] = 0;
    }

    for(int i = zero; i <= range; i++){
        a[i] = 1;
    }

    for(int i = range + 1; i < n; i++){
        a[i] = 2;
    }

    

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
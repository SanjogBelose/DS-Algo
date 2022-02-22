#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 };
    int n = 8;
    int positive = 0;
    int negative = 0;
    int j = 0;
    int k = 0;

//------------------------------------------------------------------------
// Counting no. of positive & negative numbers in array

    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            negative += 1;
        }
        else {
            positive += 1;
        }
    }

//-------------------------------------------------------------------------
// adding positive numbers in pos array and negative numbers in neg array

    int pos[positive] = {};
    int neg[negative] = {};

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            pos[j++] = arr[i];
        }
        else {
            neg[k++] = arr[i];
        }
    }

//---------------------------------------------------------------------------
// merging pos and neg array in main array

    for(int i = 0; i < positive; i++){
        arr[i] = pos[i];
    }

    int x = 0;
    for(int i = positive; i < n; i++){
        arr[i] = neg[x++];
    }

//---------------------------------------------------------------------------
// printing main array 

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

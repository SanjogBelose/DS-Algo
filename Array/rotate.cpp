#include<iostream>
#include<vector>
using namespace std;

int main() {

    int arr[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int n = 8;
    int z = n -1;

    vector<int> rotate;

    rotate.push_back(arr[z]);

    for(int i = 0; i < z; i++){
        rotate.push_back(arr[i]);
    }

    copy(rotate.begin(), rotate.end(), arr);

    // for(int i = 0; i < n; i++){
    //     arr[rotate.i];
    // }

    for(int i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }


    // vector<int>::iterator it;

    // for(it = rotate.begin(); it < rotate.end(); it++){
    //     cout << *it << "\n";
    // }

    return 0;
}


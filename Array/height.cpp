#include<iostream>
#include<set>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int n = 10;
    int k = 5;

    int z;
    int max;
    int min;
    int answer;

    set<int> v;
    for(int i = 0; i < n; i++){
        v.insert(arr[i]);
    }

    z = v.size();

     copy(v.begin(), v.end(), arr);

    for(int i = 0; i < z; i++){
        if(arr[i] % 2 == 1){
            arr[i] += k;
            cout << arr[i] << "\n";
        }
        else if(arr[i] %2 == 0){
            arr[i] -= k;
            cout << arr[i] << "\n";
        }
    }

    vector<int> vec;

    for(int i = 0; i < z; i++){
        vec.push_back(arr[i]);
    }


    max = *max_element(vec.begin(), vec.end());
    min = *min_element(vec.begin(), vec.end());
    answer = max - min;

    cout << answer;
    cout << "\n";

    return 0;
}
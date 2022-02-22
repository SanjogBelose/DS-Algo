//Minimize the Heights II

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {8, 1, 5, 4, 7, 5, 7, 9, 4, 6};
    int n = 10;
    int k = 5;

    sort(arr, arr + n);

    int minimum;
    int maximum;
    int diff;
    int ans = arr[n-1] - arr[0];


    for(int i = 1; i < n; i++){
        if(arr[i]>=k){
            maximum = max(arr[n-1]-k, arr[i-1]+k);
            minimum = min(arr[0]+k, arr[i]-k);

            diff = maximum - minimum;

            ans = min(ans, diff);
        }
        
    }

    cout << ans;

    return 0;
}
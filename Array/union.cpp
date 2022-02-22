#include<iostream>
using namespace std;

int main(){

    int a[] = {25, 85, 1, 32, 54, 6};
    int n = 6;
    int b[] = {85, 2, 1, 32, 9};
    int m = 5;

    // int a[] = {1,2};
    // int n = 2;
    // int b[] = {1,2,3,4,5};
    // int m = 5;

//-------------------------------------------

    
    int x = 0;

    if(n >= m){
        x = n;
    }
    else{
        x = m;
    }

//-----------------------------------------------

    if( m <= n) {
        for(int i = 0; i < m; i++){
            int z = 0;
            for(int j = 0; j < n; j++){
                if(b[i] != a[j]){
                    z++;
                }
            }

            if( z == n){
                x++;
            }
        }
    }
    else {
        for(int i = 0; i < n; i++){
            int z = 0;
            for(int j = 0; j < m; j++){
                if(a[i] != b[j]){
                    z++;
                }
            }

            if( z == m){
                x++;
            }
        }
    }

//---------------------------------------------------------
        

    cout << x << "\n";

}
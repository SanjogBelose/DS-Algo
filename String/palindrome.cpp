#include<iostream>
using namespace std;

void palindrome(){
    //string S = "nayan";
    string S = "rhar";
    int SLength = S.length();
    int halfLength = SLength/2;
    int n = SLength - 1;
    int result = 0;
    int a = 0;

    for(int i = 0; i < halfLength; i++){
        if(S[a] == S[n]){
            a++;
            n--;
            result++;
        }
        else{
            break;
        }
    }

    if(result == halfLength){
        cout << 1 << "\n";
    }
    else{
        cout << 0 << "\n";
    }

}


int main(){
    palindrome();
    return 0;
}
#include <iostream>

using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
    for(int i = 2; i < 1000; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
}
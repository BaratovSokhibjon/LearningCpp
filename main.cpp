#include <iostream>

using namespace std;

int FibonacciNum(){
    int fib[19] = {0, 1,};

    for(int i = 2; i <= 19; i++){
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
    }
}

int main(void)
{
    for (int n = 2; n < 20; ++n)
        cout << FibonacciNum() << endl;
    return 0;
}
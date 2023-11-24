#include <iostream>
using namespace std;

int fibbonachi(int N){
    int ticker = 0;
    int a = 0, b = 1, nextTerm;
    cout << "numbers fib: " << N << "iterations: ";

    for(int i = 1; i <= N; i++){
        if(ticker ==3){
            cout << a << " ";
            ticker = 0;
        }
        nextTerm = a+b;
        a = b;
        b = nextTerm;
        ticker++;
    }
}

int main() {
    int iteration = 0;
    cout << "Enter N: ";
    cin >> iteration;
    fibbonachi(iteration);
}

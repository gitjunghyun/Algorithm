#include <iostream>

using namespace std;

int main(){

    int in;
    cin >> in;
    int sum=0;

    for(int i = 1; i <= in ; i++){ 
        sum = sum + i;
    }
    cout << sum;

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int in;
    cin >> in;

    for(int i = 1; i <= in ; i++){ 
        for(int j = 1; j <= i ; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
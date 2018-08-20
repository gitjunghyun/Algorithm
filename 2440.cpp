#include <iostream>

using namespace std;

int main(){

    int in;
    cin >> in;

    for(int i = in; i >= 1 ; i--){ 
        for(int j = 1; j <= in ; j++){
            if(j <= i){
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}
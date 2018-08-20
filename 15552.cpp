#include <iostream>

using namespace std;

int main(){

    int in;
    cin >> in;
    int sum=0;

    cin.tie(NULL);
    
    int a,b;
    for(int i = 1; i <= in ; i++){ 
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;
}
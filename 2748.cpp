#include <iostream>

using namespace std;

int main() {

    int n;
    
    cin >> n;

    long arr[90];
    arr[0] = 0;
    arr[1] = 1;

	for(int i = 2 ; i <= n ; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }

    cout << arr[n] << endl;
    
    return 0;
}
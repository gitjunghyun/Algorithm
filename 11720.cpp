#include <iostream>

using namespace std;

int main(){

    int n=1;
    cin >> n;
    
    char arr[n];
    for(int i = 0; i < n ; i++){ cin >> arr[i]; }

    int sum = 0;
    for(int i = 0; i < n ; i++) {
        sum = sum + (arr[i] - '0');
    }
    cout << sum;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int arr[4];
    int sum = 0;
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    int m = sum / 60;
    int s = sum % 60;

    cout << m << "\n";
    cout << s << "\n";

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int arr[3];

    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    int avr = 0;
    int temp = 0;
    for(int i = 0; i < 3 ; i++){
        for(int j = i+1; j < 3 ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << arr[1] << endl;

    return 0;
}
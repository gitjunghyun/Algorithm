#include <iostream>

using namespace std;

int main() {

    int arr[5];
    
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int temp;
    for(int x = 0 ; x < 5 ; x++) {
        for(int y = 0 ; y < 4 ; y++) { 
            if(arr[y] > arr[y+1]){
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
                
                for(int j = 0; j < 5; j++) {
                    cout << arr[j] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
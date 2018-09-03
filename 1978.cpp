#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){ continue; }
        else if(arr[i] == 2) { count++; continue;}
        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0){
                break;
            }
            else if(j+1 == arr[i]){
                count++;
                break;
            }
        }
        
    }
    cout << count;
    return 0;
}
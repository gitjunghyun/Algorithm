#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int idx;
        float sum = 0.0 ,count = 0;
        cin >> idx;
        int score[idx];

        int avr;
        for(int j = 0; j < idx; j++)
        {
            cin >> score[j];
            sum = sum + score[j];
        }
        avr = sum / idx;
        for(int m = 0 ; m < idx ; m++){
            if(avr < score[m]) {
                count++;
            }
        }
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << count / idx * 100 << "%\n";
    }

    return 0;
}
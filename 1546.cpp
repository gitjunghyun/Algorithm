#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int score[n];
    float max = 0;
    for(int i = 0; i < n; i++) {
        cin >> score[i];
        if(max < score[i]) {
            max = score[i];
        }
    }

    float fscore[n];
    float sum = 0.00;
    for(int j = 0; j < n ; j++) {
        fscore[j] = score[j]/max*100;
        sum = sum + fscore[j];
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum/n << endl;

    return 0;
}
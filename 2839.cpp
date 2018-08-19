#include <iostream>

using namespace std;

int main()
{
    int in = in;
    cin >> in;
    
    for(int f = in/5 ; f >= 0 ; f--){
        if((in-5*f) % 3 == 0){
            int t = (in-5*f) / 3;
            cout << t + f << endl;
            break;
        }
        else if(f == 0 && (in % 3) != 0){
            cout << -1 << endl;
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int in, count = 0;
    cin >> in;

    if (in < 10) {
        in = 10 * in;
    }
    int num = in;
    int one, ten;
    while(true){
        ten = num/10;
        one = num%10;
        num = (one*10) + (ten+one)%10;

        count++;
        if(in == num) {break;}
    }
    cout << count;

    return 0;
}
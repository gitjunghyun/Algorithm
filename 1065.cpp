#include <iostream>

using namespace std;

int num(int num);

int main() {

    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 1 ; i <= n ; i++){
        if(num(i) == 1){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}

int num(int num) {
    int h,t,o;
    if(num < 100){
        return 1;
    }else if(num == 1000){
        return 0;
    }else{
        h = num/100;
        t = (num%100)/10;
        o = num%10;
        if((h-t) == (t-o)){
            return 1;
        }
        else{
            return 0;
        }
    }
}
#include <iostream>

using namespace std;

int self(int num);

int main() {

    int selfarr[10000] = {0};
    for(int i = 1; i <= 10000; i++){
        selfarr[i-1] = self(i);
    }

    for(int i = 1; i <= 10000; i++){
        int boo = 0;
        for(int j = 0 ; j < 10000 ; j++){
            if(i == selfarr[j]){
                boo = 1;
            }
        }
        if(boo == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}

int self(int num) {
    if(num < 10){
        return num * 2;
    }
    else if(num < 100){
        return num + (num/10) + (num%10);
    }else if(num < 1000){
        return num + (num/100) + ((num%100)/10) + (num%10);
    }else if(num <10000){
        return num + (num/1000) + ((num%1000)/100) + ((num%100)/10) + (num%10);
    }else if(num = 10000){
        return 10001;
    }
}
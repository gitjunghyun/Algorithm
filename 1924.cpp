#include <iostream>

using namespace std;

int main(){

    int mm=12,dd=31;
    int cal[mm][dd];
    int count = 1;

    for(int m = 1; m <= mm ; m++){
        if(m == 2){ dd = 28; }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m ==12){ dd = 31; }
        else{dd = 30; }

        for(int d = 1 ; d <= dd ; d++){
            cal[m-1][d-1] = count % 7;
            count++;
        } 
    }

    int a,b;
    cin >> a >> b;
    a = a-1; b = b-1;
    
    if(cal[a][b] == 1){ cout << "MON\n"; }
    else if(cal[a][b] == 2){ cout << "TUE\n"; }
    else if(cal[a][b] == 3){ cout << "WED\n"; }
    else if(cal[a][b] == 4){ cout << "THU\n"; }
    else if(cal[a][b] == 5){ cout << "FRI\n"; }
    else if(cal[a][b] == 6){ cout << "SAT\n"; }
    else{ cout << "SUN\n"; }

    return 0;
}
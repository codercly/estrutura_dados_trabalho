#include<iostream>
#include<string>
using namespace std;

int main(){
    string num, n;
    cin >> num;

    for(int i = 0; i < num.length(); i++){
        
        if(num[i] == 'A' || num[i] == 'B' || num[i] == 'C')
            num[i] = '2';
        if(num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
            num[i] = '3';
        if(num[i] == 'G' || num[i] == 'H' || num[i] == 'I')
            num[i] = '4';
        if(num[i] == 'J' || num[i] == 'K' || num[i] == 'L')
            num[i] = '5';
        if(num[i] == 'M' || num[i] == 'N' || num[i] == 'O')
            num[i] = '6';
        if(num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S')
            num[i] = '7';
        if(num[i] == 'T' || num[i] == 'U' || num[i] == 'V')
            num[i] = '8';
        if(num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z')
            num[i] = '9';
        
    }

    cout << num << endl;
    return 0;
}
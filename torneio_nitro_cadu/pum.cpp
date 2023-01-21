#include<iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int i = 1; i <= n * 4; i +=4){
        cout << i << " "; 
        cout << i + 1 << " ";
        cout << i + 2 << " ";
        cout << "PUM" << endl;
    }
 

    return 0; 
}
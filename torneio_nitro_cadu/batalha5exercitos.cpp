#include<iostream>
using namespace std;

int main(){
    int h, e, a, o, w, x;
    cin >> h >> e >> a >> o >> w >> x;
    if((h + e + a + x) > (w + o))
        cout << "Middle-earth is safe." << endl;
    else
        cout << "Sauron has returned." << endl;

    return 0;
}
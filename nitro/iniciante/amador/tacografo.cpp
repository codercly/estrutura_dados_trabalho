#include<iostream>
using namespace std;

int main(){
    int n, t, v, distance, totalDistance = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t >> v;
        distance = t * v;
        totalDistance = totalDistance + distance;
    }

    cout << totalDistance << endl;

    return 0;
}
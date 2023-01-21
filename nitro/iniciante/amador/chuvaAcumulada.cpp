#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    m = n;
    int matriz[n][m];
    int matriz2[n][m];
    int matriz3[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz2[i][j];
        }
    }

    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matriz2[i][j] << "\t";
        }

        cout << endl;
    }*/

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
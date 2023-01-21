#include<iostream>
using namespace std;

int main(){
    int n, multiplos, multi2 = 0, multi3 = 0, multi4 = 0, multi5 = 0;
    cin >> n;
    for(int i = 0; i <n; i++){
        cin >> multiplos;
        if(multiplos % 2 == 0){multi2++;}
        if(multiplos % 3 == 0){multi3++;}
        if(multiplos % 4 == 0){multi4++;}
        if(multiplos % 5 == 0){multi5++;}
    }

    /*cout << multi2 << " Multiplos(s) de 2\n";
    cout << multi3 << " Multiplos(s) de 3\n";
    cout << multi4 << " Multiplos(s) de 4\n";
    cout << multi5 << " Multiplos(s) de 5\n";*/
    printf("%d Multiplo(s) de 2\n",multi2);
    printf("%d Multiplo(s) de 3\n",multi3);
    printf("%d Multiplo(s) de 4\n",multi4);
    printf("%d Multiplo(s) de 5\n",multi5);

    return 0;
}
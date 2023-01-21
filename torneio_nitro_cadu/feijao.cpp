#include <iostream>
using namespace std;

int main()
{
    int vetor[4], i;
    for (i = 0; i < 4; i++)
    {
        cin >> vetor[i];
    }
    for(i = 0; i < 4; i++){
        if(vetor[i] == 1)
            cout << i + 1 << endl;
        
    }

    return 0;
}
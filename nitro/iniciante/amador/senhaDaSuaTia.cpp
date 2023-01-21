#include<iostream>
using namespace std;

int main(){
    int n, m, a, k;
    int contM = 0, contA = 0, contK = 0;
    string senha;
    bool ok;
    cin >> n >> m >> a >> k;
    
    cin >> senha;
    for(int i = 0; i < senha.size(); i++){

        if(senha[i] >= '0' && senha[i] <= '9'){contK++;}
        if(senha[i] >= 65 && senha[i] <= 90){contA++;} 
        if(senha[i] >= 97 && senha[i] <= 122){contM++;}
    
    }

    //cout << contM << " " << contA << " " << contK << endl;
    if((senha.size() == 6 && senha.size() <= 1000) && (contM == m && contA == a && contK == k)){
        cout << "Ok =/";
    }else{
        cout << "Ufa :)";
    }
    return 0;
}
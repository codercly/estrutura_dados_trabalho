#include<iostream>
using namespace std;

int validarSenha(string s){
    int contN = 0, contCarac = 0, maior;
    for(int i = 0; i < s.length(); i++){
        while((s[i] >= '0' && s[i] <= '9') && (s[i + 1] >= '0' && s[i + 1] <= '9') && (i < s.length() -1)){
            contN++;
        }
        //if (contN > maior){
            //maior = contN;
        //}
        if(s[i] >= 65 && s[i] <= 90){contCarac++;}
    }
    
    if(contN == 3 && contCarac >= 3){
        return true;
    } else {
        return false;
    }

}

int main(){
    string senha;

    cin >> senha;

    validarSenha(senha);


}
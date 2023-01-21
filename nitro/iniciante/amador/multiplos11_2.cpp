/*#include<iostream>
using namespace std;

MINHA LOGICA ORIGINAL

int main(){
    string number = "";
    int somap = 0, somai = 0, somat;
    //cin >> number;
    string sp = "", si = "";
    int n;
    while(cin >> n && n != 0){
        
        number = n;
        for(int i = 0; i < number.size(); i++){
            int indice = i;
            if(indice % 2 == 0){
                somap += number[i];
            }else{
                somai += number[i];
            }

            if(somap > somai){
                somat = somap - somai;
            }else{
                somat = somai - somap;
            }
        }

        if(somat == 0){
            cout << n << " " << "is a multiple of 11" << "\n";
        }else{
            cout << n << " " << "is not a multiple of 11" << "\n";
        }
    }

    //cout << somap << " " << somai << endl;
   // cout << sp << " " << si;

    return 0;
}*/



/*#include<iostream>
#include<cmath>
using namespace std;

MINHA LOGICA MUDADA DEPOIS DE PESQUISAS, MAS NÃO PASSOU EM 3 CASOS DE TESTE

int main(){
  int somap = 0, somai = 0, somat;
  string n;
  while(cin >> n && n != "0"){
    //string number = to_string(n); 
    for(int i = 0; i < n.size(); i++){
      if(i % 2 == 0){
        somap += n.at(i) - '0';
      }else{
        somai += n.at(i) - '0';
      }
    }
    somat = abs(somap - somai);
    if(somat == 0 || somat % 11 == 0){
      cout << n << " " << "is a multiple of 11." << "\n";
    }else{
      cout << n << " " << "is not a multiple of 11." << "\n";
    }
  }
return 0;
}*/

//SOLUÇÃO ENVIADA DEPOIS QUE FIQUEI PUTO DA CARA E VI A RESPOSTA

#include<iostream>
using namespace std;

int main(){
  int somat;
  string n;
  while(cin >> n && n != "0"){
    somat = 0;
    for(int i = 0; i < n.size(); i++){
        somat = (-1) * somat + (n[i] - '0');
    
    }
    
    if(somat % 11 == 0){
      cout << n << " " << "is a multiple of 11." << "\n";
    }else{
      cout << n << " " << "is not a multiple of 11." << "\n";
    }

  }
return 0;
}
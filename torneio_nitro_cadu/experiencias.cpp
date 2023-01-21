#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n, quant, total = 0, coelho = 0, sapo = 0, rato = 0;
    char tipo;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> quant >> tipo;
        total += quant;
        if(tipo == 'R'){rato += quant;}
        if(tipo == 'S'){sapo += quant;}
        if(tipo == 'C'){coelho += quant;}

        
    }    
    cout <<"Total: "<< total << " cobaias" <<  endl;
    cout <<"Total de coelhos: "<< coelho << endl;
    cout <<"Total de ratos: "<< rato << endl;
    cout <<"Total de sapos: "<< sapo << endl;
    /*cout<< setprecision(2) << fixed;
    cout <<"Percentual de coelhos: "<< coelho / 0.92 << " " << "%" << endl;
    cout <<"Percentual de ratos: " << / 0.92 << " " << "%" << endl;
    cout <<"Percentual de sapos: " << sapo / 0.92 << " " << "%" << endl;*/
    printf("Percentual de coelhos: %.2f %\n", ((float)coelho/(float)total)*100.00);
    printf("Percentual de ratos: %.2f %\n", ((float)rato/(float)total)*100.00);
    printf("Percentual de sapos: %.2f %\n", ((float)sapo/(float)total)*100.00);
    return 0; 
}
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float counterPhrase = 0, counterPal = 0, checkCounter = 0;
    char pal;
    string phrase;

    cin >> pal;
    cin.ignore();
    getline(cin, phrase);

    for(int i = 0; i < phrase.length(); i++){
        if(phrase[i] == ' ' || i == phrase.length()-1){
            counterPhrase++;
        }
        if(phrase[i] == pal){
            counterPal++;
            
            /*while(phrase[i + 1] != ' ' || i != phrase.length()-1){
                if(phrase[i] == pal){
                    break;
                }
            }*/
        }
        /*if(phrase[i] == pal){
            counterPal++;
            for(int j = i + 1; j < phrase.length(); j++){
                if(phrase[j] == ' ' || j == phrase.size() - 1)
                break;
            }
        }*/
    }
    /*cout << setprecision(1) << fixed;
    counterPhrase += 1;
    //checkCounter = (counterPal* 100) / (counterPhrase);
    checkCounter = (counterPal / counterPhrase ) * 100;
    cout << checkCounter;*/
    cout << setprecision(1) << fixed;
    checkCounter = (counterPal / counterPhrase ) * 100;
    cout << checkCounter;
    /*cout << counterPal << endl;
    cout << counterPhrase;*/
    return 0;
}
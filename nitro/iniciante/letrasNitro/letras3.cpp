#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float counterPal = 0, checkcounter = 0;
    char pal;
    string phrase;
    string word = "";
    int wordCount = 0;
    bool found = false;

    cin >> pal;
    cin.ignore();
    getline(cin, phrase);

    for(int i = 0; i < phrase.length(); i++){
        if(phrase[i] != ' '){
            word += phrase[i];
            if(phrase[i] == pal && !found){
                counterPal++;
                found = true;
            }
        }
        else {
            if(word != ""){
                wordCount++;
                found = false;
                word = "";
            }
        }
    }
    if(word != ""){
        wordCount++;
    }

    checkcounter = (counterPal / (float)wordCount) * 100;
    cout << setprecision(1) << fixed;
    cout << checkcounter;
    return 0;
}
#include <iostream>
using namespace std;
/*como resolvi esse problema: o codigo original tinha varios erros, primeiro indentifiquei eles
e depois corrigi
os erros eram: o codigo estava todo desorganizado e complexo. o segundo for estava começando em 1
ao inveis de 0, 
    esse trecho estava errado:

        if (alunos[i].media > alunos[indice_melhor].media)
             indice_melhor = i;
    o certo:
        if (alunos[i].media > indice_melhor)
            indice_melhor = alunos[i].media;
o principal erro na minha visão era que não tinha um laço percorrendo o vetor para mostrar quais alunos tinham a melhor 
media igual.



*/


const int MAX_ALUNOS = 1000;


struct{

    int codigo, media;

} alunos[MAX_ALUNOS];

int main()
{
    
    int i, indice_melhor, n;
    int turma = 1;

    // le numero de alunos da primeira turma
    cin >> n;
    while (n > 0)
    {
        // le dados dos alunos
        for (i = 0; i < n; i++)
            cin >> alunos[i].codigo >> alunos[i].media;
        // procura aluno de maior media
        indice_melhor = 0;
        for (i = 0; i < n; i++){
            if (alunos[i].media > indice_melhor)
                indice_melhor = alunos[i].media;
        }
        // escreve resposta
        cout << "Turma " << turma++ << "\n";
        for(int i = 0; i < n; i++){
            if(alunos[i].media == indice_melhor){
                cout << alunos[i].codigo << " ";
            }
        }
        cout << "\n\n";
        // le numero de alunos da proxima turma
        cin >> n;
    }

    return 0;
}
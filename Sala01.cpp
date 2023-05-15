//Bibliotecas
#include <iostream>
using namespace std;

int main() {
    //Declaração das variáveis e array.
    int media;
    int sala[6];
    //Definição dos valores do Array. Começamos a contar a partir do 0, então sempre será 1 número menor do que a variável.
    sala[0] = 35;
    sala[1] = 4;
    sala[2] = 22;
    sala[3] = 20;
    sala[4] = 36;
    sala[5] = 30;
    //Comando de repetição usado para mostrar as salas e quantidade de alunos de forma rápida, assim poupando linhas de código.
    for (int i = 0; i < 6; i++){
        //Interface que vai mostrar, e repetir, até a condição se tornar falsa.
        cout << "Sala " << i + 1 << ": " << sala[i] << endl;
    }
    //Equação feita para calcular a média de alunos.
    media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]);
    media = (media/6);
    //Interface que mostra o valor da média.
    cout << "A media de alunos por sala é: " << (media) << endl;
    
return 0;
}

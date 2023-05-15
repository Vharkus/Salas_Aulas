//Biblioetas
#include <iostream>
using namespace std;

int main() {
    //Declaração das variáveis junto do array.
    int media;
    int sala[6];
    //Interfaces interativas que permitem o usuário definir o número de alunos.
    cout << "Informe quantos alunos tem na sala 1: "<< endl;
    cin >> sala[0];
    cout << "Informe quantos alunos tem na sala 2: " << endl;
    cin >> sala[1];
    cout << "Informe quantos alunos tem na sala 3: " << endl;
    cin >> sala[2];
    cout << "Informe quantos alunos tem na sala 4: " << endl;
    cin >> sala[3];
    cout << "Informe quantos alunos tem na sala 5: " << endl;
    cin >> sala[4];
    cout << "Informe quantos alunos tem na sala 6: " << endl;
    cin >> sala[5];
    //Bloco de repetição que lista as salas e números de alunos os colocando em ordem.
    for (int i = 0; i < 6; i++){
        //Interface repetitiva que mostrará as salas.
        cout << "Sala " << i + 1 << ": " << sala[i] << endl;
        
    }
    //Equação que nos da a média de alunos.
     media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]);
    media = (media/6);
    
    cout << "Salas com alunos acima da média: " << endl;
    //Segundo bloco de repetição For.
    for (int i = 0; i < 6; i++){
        //Caso o número de alunos seja maior que o número da média, a repetição será acionada.
        if (sala[i] > media){
            //Interface que mostra as salas com os maiores números.
            cout << "Sala " << i + 1 << " ,";
    }
}
    cout << "Salas com alunos abaixo da média: " << endl;
    //Terceiro bloco de repetição For.
    for (int i = 0; i < 6; i++){
        //Mesmo esquema do for anterior, mas dessa vez vai mostrar as salas com números menores que a média. 
        if (sala[i] < media){
            cout << "Sala " << i + 1 << " ,";
        }
    }
return 0;
}

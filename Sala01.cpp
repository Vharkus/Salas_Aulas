#include <iostream>
using namespace std;
int main() {
    int pessoas, media;
    int sala[6][6];
    sala[0][0] = 35;
    sala[1][1] = 4;
    sala[2][2] = 22;
    sala[3][3] = 20;
    sala[4][4] = 36;
    sala[5][5] = 30;
    
    cout << "Informe quantos alunos estudam na sala 1: " << sala[0][0] << endl;
    cout << "Informe quantos alunos estudam na sala 2: " << sala[1][1] << endl;
    cout << "Informe quantos alunos estudam na sala 3: " << sala[2][2] << endl;
    cout << "Informe quantos alunos estudam na sala 4: " << sala[3][3] << endl;
    cout << "Informe quantos alunos estudam na sala 5: " << sala[4][4] << endl;
    cout << "Informe quantos alunos estudam na sala 6: " << sala[5][5] << endl;
    
    
    media = (sala[0][0] + sala[1][1] + sala[2][2] + sala[3][3] + sala[4][4] + sala[5][5])/6; 
    cout << "Resultado: " << media<< endl;

    
    for (int i = 24; i <= 24; i++){
        cout << "As salas com alunos acima da média possuem: " << sala[0][0] << ", "<< sala[4][4] << ", e "<< sala[5][5] << " alunos."<< endl;
    }
  return 0;
}
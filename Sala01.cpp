#include <iostream>
using namespace std;
int main() {
    int pessoas, media;
    int sala[6][2];
    
    sala[0][0] = 1;
    sala[0][1] = 35;
    sala[1][0] = 2;
    sala[1][1] = 4;
    sala[2][0] = 3;
    sala[2][1] = 22;
    sala[3][0] = 4;
    sala[3][1] = 20;
    sala[4][0] = 5;
    sala[4][1] = 36;
    sala[5][0] = 6;
    sala[5][1] = 30;
    
      cout << "Informe quantos alunos estudam na sala 1: " << sala[0][1] << endl;
    cout << "Informe quantos alunos estudam na sala 2: " << sala[1][1] << endl;
    cout << "Informe quantos alunos estudam na sala 3: " << sala[2][1] <<endl;
    cout << "Informe quantos alunos estudam na sala 4: " << sala[3][1] << endl;
    cout << "Informe quantos alunos estudam na sala 5: " << sala[4][1]<< endl;
    cout << "Informe quantos alunos estudam na sala 6: " << sala[5][1]<< endl;
    
     media = ((sala[0][1] + sala[1][1] + sala[2][1] + sala[3][1] + sala[4][1] + sala[5][1])/6);
     cout << "A média de alunos é: " << media << endl;
     
  
  return 0;
}

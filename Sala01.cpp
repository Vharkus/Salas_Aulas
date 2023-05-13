#include <iostream>
using namespace std;
int main() {
    int pessoas, media;
    int sala[6][6];
    
    cout << "Informe quantos alunos estudam na sala 1: " << endl;
    cin >> sala[0][0];
    cout << "Informe quantos alunos estudam na sala 2: " << endl;
    cin >> sala[1][1];
    cout << "Informe quantos alunos estudam na sala 3: " << endl;
    cin >> sala[2][2];
    cout << "Informe quantos alunos estudam na sala 4: " << endl;
    cin >> sala[3][3];
    cout << "Informe quantos alunos estudam na sala 5: " << endl;
    cin >> sala[4][4];
    cout << "Informe quantos alunos estudam na sala 6: " << endl;
    cin >> sala[5][5];
    
    
    media = (sala[0][0] + sala[1][1] + sala[2][2] + sala[3][3] + sala[4][4] + sala[5][5])/6; 
    cout << "Resultado: " << media<< endl;

    
    cout << "As salas com alunos acima da média possuem: " << sala[0][0] << ", "<< sala[4][4] << ", e "<< sala[5][5] << " alunos."<< endl;
    
  return 0;
}

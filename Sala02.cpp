#include <iostream>
using namespace std;

int main() {
    
    int media, pessoas;
    int sala[6];
    
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

    for (int i = 0; i < 6; i++){
        cout << "Sala " << i + 1 << ": " << sala[i] << endl;
        
    }
     media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]);
    media = (media/6);
    
    cout << "A media de alunos por sala é: " << media << endl;
    
return 0;
}

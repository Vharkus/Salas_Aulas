#include <iostream>
using namespace std;

int main() {
    
    int media, pessoas;
    int sala[6];
    
    sala[0] = 35;
    sala[1] = 4;
    sala[2] = 22;
    sala[3] = 20;
    sala[4] = 36;
    sala[5] = 30;
    
    for (int i = 0; i < 6; i++){
        cout << "Sala " << i + 1 << ": " << sala[i] << endl;
    }
    
    media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]);
    media = (media/6);
    
    cout << "A media de alunos por sala é: " << (media) << endl;
    
return 0;
}

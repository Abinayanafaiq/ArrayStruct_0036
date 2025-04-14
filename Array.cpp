#include <iostream>
using namespace std;    


// mendeklarasikan array tanpa ukuran, wajib diberi nilai awal
int nilai[]={1,2,3};

//mendeklarasikan array dengan ukuran dan diberi nilai awal
string nama[5]={"ben", "agus", "fara", "ama", "alkita"};

// mendeklarasikan array dengan ukuran dan tanpa nilai awal
float score[5];

int main(){
    cout << "nama pada index ke 4 adalah " << nama[4] << endl;
    // memberi nilai pada elemen array per index
    nama[4]="Abin";
    cout << "nama pada index ke 4 adalah " << nama[4] << endl;
    cout << "input score" << endl;

    cout << endl;
    // memberi nilai array dengan looping for
    for (int i=0; i<5; i++){
        cout << "score ke " << i+1 << " adalah " << score[i] << endl;
    }


    cout << "input score" << endl;

    cout << endl;
    // memberi nilai array dengan looping for
    for (int i=0; i<5; i++){
        cout << "score ke " << i+1 << " = " << score[i] << endl;
    }
}
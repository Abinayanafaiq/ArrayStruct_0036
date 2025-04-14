#include <iostream>
#include <string>
using namespace std;


struct Player {
    string name;
    string id;
    string level;
};

int main(){
    Player pl;
    cout << "masukan nama player: ";
    getline(cin, pl.name);
    cout << "masukan id player: ";
    getline(cin, pl.id);
    cout << "masukan level player: ";
    getline(cin, pl.level); 


    cout << "tampilan player" << endl;
    cout << "nama player: " << pl.name << endl;
    cout << "id player: " << pl.id << endl;         
    cout << "level player: " << pl.level << endl;
}

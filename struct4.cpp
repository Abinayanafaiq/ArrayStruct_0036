#include <iostream>
#include <string>
using namespace std;


struct Player {
    string name;
    string id;
    string level;
    Weapon weapon;
};

struct Weapon {
    string name;
    int damage;
};


int main(){
    Player pl[3];    
    for(int i=0; i<3; i++){
        cout << "masukan nama player: ";
        getline(cin, pl[i].name);
        cout << "masukan id player: ";
        cin >> pl[i].id;
        cout << "masukan level player: ";
        cin >> pl[i].level; 
        cin.ignore();
        cout << "masukan nama senjata: ";
        getline(cin, pl[i].weapon.name);
        cout << "masukan damage senjata: ";
        cin >> pl[i].weapon.damage; 
        cin.ignore();
    }
    
    

    for(int i=0; i<3; i++){
    cout << "tampilan player" << endl;
    cout << "nama player: " << pl[i].name << endl;
    cout << "id player: " << pl[i].id << endl;         
    cout << "level player: " << pl[i].level << endl;
    cout << "nama senjata: " << pl[i].weapon.name << endl;
    cout << "damage senjata: " << pl[i].weapon.damage << endl;
    }
}
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
    Player pl;
    cout << "masukan nama player: ";
    getline(cin, pl.name);
    cout << "masukan id player: ";
    cin >> pl.id;
    cout << "masukan level player: ";
    cin >> pl.level; 
    cin.ignore();
    cout << "masukan nama senjata: ";
    getline(cin, pl.weapon.name);
    cout << "masukan damage senjata: ";
    cin >> pl.weapon.damage; 


    cout << "tampilan player" << endl;
    cout << "nama player: " << pl.name << endl;
    cout << "id player: " << pl.id << endl;         
    cout << "level player: " << pl.level << endl;
    cout << "nama senjata: " << pl.weapon.name << endl;
    cout << "damage senjata: " << pl.weapon.damage << endl;
}

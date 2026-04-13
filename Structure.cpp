#include<iostream>
#include<string>
using namespace std;
struct Character{
    int health;
    string name;
    int level;
};
void displayCharacterInfo(Character character){
    cout<<"Character: "<<character.name<<endl;
    cout<<"Health: "<<character.health<<endl;
    cout<<"Level: "<<character.level<<endl;
}
int main(){
    struct Character knight = {100,"Knight",1};
    knight.health--;
    displayCharacterInfo(knight);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

class game{
public:

    string name;
    int players;
    int alive;
    int dead;
    int battles;
    int d_battles;
    float progress;
};

class player{
public:

};

int main(){



    return 1;
}

void show_game(game obj){
    char clear;

    cout << "Jogadores:" << obj.players << endl;
    cout << "Vivos:" << obj.alive << endl;
    cout << "Mortos:" << obj.dead << endl;
    cout << "Batalhas:" << obj.battles << endl;
    cout << "Batalhas até agora:" << obj.d_battles << endl;
    cout << "Progresso: %" << obj.progress << endl;

    cout << endl << "Limpar tela? [s/n]: ";
    cin >> clear;

    clear == ('s' || 'S') ? system("clear") : printf("-----------------------------------");
}

void initial(string& name){
    cout << "Bem vindo a aventura" << name << endl << endl;

    

}
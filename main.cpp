// headers here ...

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

// headers for all our files currently made
#include "MainHelperList.h"
#include "Topics.h"
#include "raylib.h"
using namespace std;

int main() {
    // gives main the vector of the object of out topic so that they can read it for our game
    vector<topics> allTopics = setTopics(); //check the class cpp to see what topic is listed in what index

    //introduction made in the terminal
    cout<< "Welcome to \"Early Computer Games\" Digital Tour!"<< endl<< endl;
    wait(1.5);
    cout<< "Please give the name we can refer you by..."<< endl;
    //cout << allTopics.at(0).getInfo(); this was a test

    string userName;
    cin >> userName;
    cout << endl << endl;

    cout << "Glad to have your here " << userName << "!" << endl << endl;
    wait(1.5);
    cout << "Before we start, let's give you a quick recap on Early Computer Games." << endl;
    
    //creates a window using raylib in the browser and sets the fps to 60
    SetTargetFPS(60);

    InitWindow(700, 700, "Game");
    Texture2D settingBackground = LoadTexture("setting.png");
    Texture2D settingTetris = LoadTexture("setting.png");
    Texture2D settingAtari = LoadTexture("setting.png");
    Texture2D settingSpaceInvaders = LoadTexture("setting.png");
    Texture2D settingMagnavox_Odyssey = LoadTexture("setting.png");
    Texture2D settingAtariPong = LoadTexture("setting.png");
    Texture2D settingFGC = LoadTexture("setting.png");
    Texture2D settingSpaceWars = LoadTexture("setting.png");
    Texture2D settingTFT = LoadTexture("setting.png");
    Texture2D settingOXO = LoadTexture("setting.png");
    Texture2D settingSpasim = LoadTexture("setting.png");
    Texture2D settingArcadeGame = LoadTexture("setting.png");
    Texture2D settingMFCG = LoadTexture("setting.png");
    



    //calls the function to run the game from the mainhelperlist cpp file, this is done for abstraction so that
    //there is less code here and it looks a lot more cleaner
    runGame(settingBackground);
    
    return 0;
}
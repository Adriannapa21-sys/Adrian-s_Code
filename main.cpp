// headers here ...

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

// headers for all our files currently made
#include "raylib.h"
#include "MainHelperList.h"
#include "Topics.h"

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
    cout<< endl<< endl;

    cout<< "Glad to have your here "<< userName<<"!"<<endl<< endl;
    wait(1.5);
    cout<< "Before we start, let's give you a quick recap on Early Computer Games."<<endl;

    //creates a window using raylib in the browser
    InitWindow(700, 700, "Movement Game");

    //loads our image into the window
    Texture2D settingBackground = LoadTexture("setting.png");


    SetTargetFPS(60);
    
    //player variables
    float playerX = 100;
    float playerY = 100;
    const int playerWidth = 50;
    const int playerHeight = 50;
    float playerSpeed = 300.0f;


    while(!WindowShouldClose()){
        //used in order to update the player x and y every frame
        float deltaTime = GetFrameTime();

        //movement system used alongside the time per frame to move the character per frame
        if(IsKeyDown(KEY_D)){
            playerX += playerSpeed * deltaTime;
        }
        else if(IsKeyDown(KEY_A)){
            playerX -= playerSpeed * deltaTime;
        }
        else if(IsKeyDown(KEY_W)){
            playerY -= playerSpeed * deltaTime;
        }
        else if(IsKeyDown(KEY_S)){
            playerY += playerSpeed * deltaTime;
        }



        //the boarders of our window to make sure the player doesnt go offscreen
        if(playerX >= 650){
            playerX = 650;
        }

        if(playerX <= 0){
            playerX = 0;
        }

        if(playerY >= 650){
            playerY = 650;
        }

        if(playerY <= 0){
            playerY = 0;
        }


        //draws the stuff in the window
        BeginDrawing();


        ClearBackground(RAYWHITE);

        DrawTexture(settingBackground, 0, 0, WHITE);
        DrawRectangle(playerX, playerY, playerWidth, playerHeight, BLUE);
        EndDrawing();



        /*
        TO DO:

        set htiboxes so the player can move from topic to topic

        use classes to generate text in the window

        make sure the text search works with the classes
        
        uhh idk what else are we doing
        
        
        */
    }
    UnloadTexture(settingBackground);
    CloseWindow();
    return 0;
}
// headers here ...

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "raylib.h"
#include "MainHelperList.h"

using namespace std;

int main() {

    cout<< "Welcome to \"Early Computer Games\" Digital Tour!"<< endl<< endl;
    wait(1.5);
    cout<< "Please give the name we can refer you by..."<< endl;

    string userName;
    cin >> userName;
    cout<< endl<< endl;

    cout<< "Glad to have your here "<< userName<<"!"<<endl<< endl;
    wait(1.5);
    cout<< "Before we start, let's give you a quick recap on Early Computer Games."<<endl;

    InitWindow(800, 600, "Movement Game");
    Texture2D settingBackground = LoadTexture("setting.png");
    SetTargetFPS(60);

    float playerX = 400;
    float playerY = 300;
    const int playerWidth = 50;
    const int playerHeight = 50;

    float playerSpeed = 300.0f;

    while(!WindowShouldClose()){
        //used in order to update the player x and y every frame
        float deltaTime = GetFrameTime();


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

        if(playerX >= 800){
            playerX = 800;
        }

        if(playerX <= 0){
            playerX = 0;
        }

        if(playerY >= 600){
            playerY = 600;
        }

        if(playerY <= 0){
            playerY = 0;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(settingBackground, 0, 0, WHITE);
        DrawRectangle(playerX, playerY, playerWidth, playerHeight, BLUE);
        EndDrawing();
    }
    UnloadTexture(settingBackground);
    CloseWindow();
    return 0;
}
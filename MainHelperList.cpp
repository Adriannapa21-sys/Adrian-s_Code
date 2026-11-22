#include <ctime>
#include "MainHelperList.h"
#include "drawing.h"
#include "raylib.h"


void wait(double seconds) {
    double start_time = clock();
    while(clock() - start_time < seconds * CLOCKS_PER_SEC){
        
    }
}




//cpp for running the graphics
void runGame(Texture2D settingBackground){

    //player variables for the game
    float playerX = 100;
    float playerY = 100;

    float playerSpeed = 300.0f;



//#########################################################################################################################//
//                         graphics from raylib                                             //
    

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

        //calls the other file to draw while game is still running
        drawing(settingBackground, playerX, playerY);
    }
    //when the window closes gets rid of any textures needed
    UnloadTexture(settingBackground);
    CloseWindow();
    
}



#include "raylib.h"
#include "drawing.h"




void drawing(Texture2D settingBackground, float playerX, float playerY){
    //loads our image into the window
    
    

    const int playerWidth = 50;
    const int playerHeight = 50;
    BeginDrawing();


    ClearBackground(RAYWHITE);

    DrawTexture(settingBackground, 0, 0, WHITE);
    DrawRectangle(playerX, playerY, playerWidth, playerHeight, BLUE);
    EndDrawing();
    
    

}
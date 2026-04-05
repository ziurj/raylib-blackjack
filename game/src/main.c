#include "raylib.h"
#include "core/state.h"

int main(void) {

    const int screenWidth = 800, screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Basic window");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        // Updating the game
        float deltaTime = GetFrameTime();
        State_Update(deltaTime);

        // Drawing the game
        BeginDrawing();

            DrawFPS(10, 10);
            State_Draw();

        EndDrawing();
    }

    return 0;

}

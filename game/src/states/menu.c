#include "core/state.h"
#include "raylib.h"
#include "menu.h"

void Menu_Start() {



}

void Menu_Draw() {

    ClearBackground(GREEN);

    int fontSize = 32;

    int textWidth = MeasureText("Basic Blackjack", fontSize);
    int x = GetScreenWidth() / 2 - textWidth / 2;
    int y = GetScreenHeight() / 2 - fontSize / 2;

    DrawText("Basic Blackjack", x, y, fontSize, BLACK);

    fontSize = 16;
    textWidth = MeasureText("Press ENTER to start", fontSize);
    x = GetScreenWidth() / 2 - textWidth / 2;
    y = GetScreenHeight() / 2 - fontSize / 2;

    DrawText("Press ENTER to start", x, y + 25, fontSize, BLACK);
}

void Menu_Update(float deltaTime) {

    if (IsKeyPressed(KEY_ENTER)) {

        State_Change(STATE_GAME);

    }

}

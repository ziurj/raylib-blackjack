#include "state.h"
#include "raylib.h"
#include "states/menu.h"
#include "states/game.h"

static State CurrentState = STATE_MENU;

void State_Change(State newState) {

    CurrentState = newState;

    switch (newState) {

        case STATE_MENU:
            Menu_Start();
            break;
        case STATE_GAME:
            Game_Start();
            break;

    }

}

void State_Draw() {

    switch (CurrentState) {

        case STATE_MENU:
            Menu_Draw();
            break;
        case STATE_GAME:
            Game_Draw();
            break;

    }

}

void State_Update(float deltaTime) {

    switch (CurrentState) {

        case STATE_MENU:
            Menu_Update(GetFrameTime());
            break;
        case STATE_GAME:
            Game_Update(GetFrameTime());
            break;

    }

}

#pragma once

typedef enum {

   STATE_MENU,
   STATE_GAME

} State;

void State_Change(State newState);
void State_Draw(void);
void State_Update(float deltaTime);

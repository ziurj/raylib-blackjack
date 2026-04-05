#include "raylib.h"
#include <stdio.h>
#include "game.h"
#include "../core/deck.h"


Card deck[MAX_CARDS];

void Game_Start() {

    // Load the tilemap
    printf("%s", GetWorkingDirectory());
    Deck_Init(deck);

}

void Game_Draw() {

    //ClearBackground((Color) { 47, 100, 77, 100 });
    ClearBackground((Color) { 47, 100, 77, 100 });
    Deck_Draw(deck);
}

void Game_Update(float deltaTime) {
    // DrawTexturePro(
    //     cardImages,
    //     (Rectangle){ 11, 2, 42, 59 },   // source: part of texture
    //     (Rectangle){ 100, 100, 42 * 1.5, 59 * 1.5 }, // destination: where + size on screen
    //     (Vector2){ 0, 0 },               // origin (pivot)
    //     0.0f,
    //     WHITE
    // );


    // DrawTexturePro(
    //     cardImages,
    //     (Rectangle){ 64, 2, 64, 64 },   // source: part of texture
    //     (Rectangle){ 150, 150, 128, 128 }, // destination: where + size on screen
    //     (Vector2){ 0, 0 },               // origin (pivot)
    //     0.0f,
    //     WHITE
    // );

}

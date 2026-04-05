#include "raylib.h"
#include "core/card.h"
#include <stdint.h>
#include <stdio.h>
#include "deck.h"

Texture2D cardImages;

uint8_t tilemapRows = 4, tilemapCols = 13;
uint8_t tilemapGapX = 65, tilemapGapY = 65;

void Deck_Init(Card* deck) {

    cardImages = LoadTexture("game/assets/cards_tilemap.png");

    for (int i = 0; i < tilemapRows; i++) {

        uint8_t cardCount = 0;

        for (int j = 0; j < tilemapCols; j++) {

           // Link the enum and the tilemap ranks/suits together.

            uint8_t suit = i;
            uint8_t rank = j;
            Vector2 tilemapPos = (Vector2) { 11 + (j * tilemapGapX), 2 + (i * tilemapGapY) };
            Vector2 worldPos = (Vector2) { 64 + ( j + 64 ) , 5 + ( i * 5 ) };
            bool flipped = false;

            deck[cardCount] = (Card) { suit, rank, tilemapPos, worldPos, flipped };

            cardCount++;

            printf("{\n Card rank: %d, Card suit: %d \n posX: %f, posY: %f\n}\n\n", rank, suit, tilemapPos.x, tilemapPos.y);
        }

    }

}

void Deck_Shuffle(void) {



}

void Deck_Update(float deltaTime) {



}

void Deck_Draw(Card* deck) {

    int x = 50;
    int y = 50;
    for (int i = 0; i < MAX_CARDS; i++) {

        DrawTexturePro(
            cardImages,
            // (Rectangle){ deck[i].tilemapPos.x, deck[i].tilemapPos.y, CARD_W, CARD_H },   // source: part of texture
            (Rectangle){ 11, 2, CARD_W, CARD_H },   // source: part of texture
            (Rectangle){ deck[i].worldPos.x, deck[i].worldPos.y, CARD_W * 1.5, CARD_H * 1.5 }, // destination: where + size on screen
            (Vector2){ 0, 0 },               // origin (pivot)
            0.0f,
            WHITE
        );


    }

}

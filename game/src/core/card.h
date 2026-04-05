#pragma once

#include "raylib.h"
#include <stdbool.h>
#include <stdint.h>

#define CARD_W 42
#define CARD_H 59


typedef enum {

    SUIT_HEARTS,
    SUIT_DIAMONDS,
    SUIT_CLUBS,
    SUIT_SPADES

} Suit;

typedef enum {

    RANK_ACE = 1,
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_9,
    RANK_10,
    RANK_JACK,
    RANK_QUEEN,
    RANK_KING

} Rank;

typedef struct {

    uint8_t suit;
    uint8_t rank;
    Vector2 tilemapPos;
    Vector2 worldPos;
    bool flipped;

} Card;

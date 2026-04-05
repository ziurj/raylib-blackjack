#pragma once

#include "card.h"

// 52 is a standard deck, but doing 53 to include a back facing image
#define MAX_CARDS 53

void Deck_Init(Card* deck);
void Deck_Shuffle(void);
void Deck_Update(float deltaTime);
void Deck_Draw(Card* deck);

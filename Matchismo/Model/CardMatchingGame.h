//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Morgan Chen on 11/14/13.
//  Copyright (c) 2013 Morgan Chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject
//designated initializer
- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly)NSInteger score;

@end

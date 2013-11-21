//
//  Deck.h
//  Matchismo
//
//  Created by Morgan Chen on 11/14/13.
//  Copyright (c) 2013 Morgan Chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end

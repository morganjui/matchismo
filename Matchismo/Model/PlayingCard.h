//
//  PlayingCard.h
//  Matchismo
//
//  Created by Morgan Chen on 11/14/13.
//  Copyright (c) 2013 Morgan Chen. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end

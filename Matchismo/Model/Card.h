//
//  Card.h
//  Matchismo
//
//  Created by Morgan Chen on 11/14/13.
//  Copyright (c) 2013 Morgan Chen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end

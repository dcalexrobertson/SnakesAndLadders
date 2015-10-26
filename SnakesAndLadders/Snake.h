//
//  Snake.h
//  SnakesAndLadders
//
//  Created by Alex on 2015-10-25.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Square.h"

@interface Snake : NSObject

@property (nonatomic, strong) Square *start;
@property (nonatomic, strong) Square *end;

@end

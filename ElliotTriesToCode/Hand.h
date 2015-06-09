//
//  Hand.h
//  ElliotTriesToCode
//
//  Created by Elliot Schrock on 6/8/15.
//  Copyright (c) 2015 Elliot Schrock. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Finger.h"

@interface Hand : NSObject
@property (nonatomic, strong) Finger *indexFinger;
@property (nonatomic, strong) Finger *middleFinger;
@property (nonatomic, strong) Finger *ringFinger;
@property (nonatomic, strong) Finger *pinkieFinger;

- (void)open;
- (void)close;
@end

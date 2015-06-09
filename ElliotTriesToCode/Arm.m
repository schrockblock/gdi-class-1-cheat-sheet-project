//
//  Arm.m
//  ElliotTriesToCode
//
//  Created by Elliot Schrock on 6/8/15.
//  Copyright (c) 2015 Elliot Schrock. All rights reserved.
//

#import "Arm.h"

@implementation Arm

- (void)extend
{
    //extend arm here
}

- (void)retract
{
    //retract arm here
}

- (void)pickUpPen
{
    //call a function by putting brackets around it
    [self.hand open];
    [self extend];
    [self.hand close];
    [self retract]; //"self" means the current instance of this class
}

@end

//
//  Arm.h
//  ElliotTriesToCode
//
//  Created by Elliot Schrock on 6/8/15.
//  Copyright (c) 2015 Elliot Schrock. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Hand.h"

@interface Arm : NSObject
@property (nonatomic, strong) Hand *hand; //a property of class Hand named "hand"

//define some simple functions
- (void)extend;
- (void)retract;
- (void)pickUpPen;
@end

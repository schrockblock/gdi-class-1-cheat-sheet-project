//
//  Pen.h
//  ElliotTriesToCode
//
//  Created by Elliot Schrock on 6/8/15.
//  Copyright (c) 2015 Elliot Schrock. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InkCartridge.h"

@interface Pen : NSObject
@property (nonatomic, strong) InkCartridge *inkCartridge;
@end

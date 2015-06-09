//
//  Person.h
//  ElliotTriesToCode
//
//  Created by Elliot Schrock on 6/8/15.
//  Copyright (c) 2015 Elliot Schrock. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Arm.h" //import other classes we made so the computer knows about them
#import "Pen.h"

//.h file = table of contents of your class.
@interface Person : NSObject //"@interface" = how we'll interface with this class, called "Person", which subclasses "NSObject"

@property (nonatomic, strong) NSString *name; //this is a property of class NSString -- meaning it is a string of characters
@property (nonatomic, strong) Arm *arm; //this is a class we created, which is why we #import it above
@property (nonatomic, strong) Pen *pen;
@property (nonatomic) int myLuckyNumber; //this is how we define a primative property. two differences: no '*' and no 'strong'

- (void)pickUpPen; //declare a simple function

//declare a complicated function (returns a Pen, and accepts a Pen and an InkCartridge
- (Pen *)pen:(Pen *)pen withInkCartridge:(InkCartridge *)inkCartridge;

//declare a couple functions dealing with primatives (that is, ints)
- (int)add:(int)firstNumber to:(int)secondNumber;
- (int)subtract:(int)firstNumber from:(int)secondNumber;

//declare a function that returns a boolean
- (BOOL)isMyLuckyNumberSeven;
@end

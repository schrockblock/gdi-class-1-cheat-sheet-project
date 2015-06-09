//
//  Person.m
//  ElliotTriesToCode
//
//  Created by Elliot Schrock on 6/8/15.
//  Copyright (c) 2015 Elliot Schrock. All rights reserved.
//

#import "Person.h"

@implementation Person

//here, we are "overriding" a function of NSObject
- (instancetype)init
{
    self = [super init];
    if (self) {
        self.name = @"Elliot"; //put an actual string of characters into the property "name"
        self.myLuckyNumber = 9; //make '9' my lucky number
    }
    return self;
}

- (void)pickUpPen
{
    if (self.arm == nil) { //if my arm doesn't exist (that is, it is equal to nil)
        Arm *myArm = [[Arm alloc] init]; //then create an arm called myArm
        self.arm = myArm; //and set self.arm equal to the address stored in the 'myArm' variable
    }
    
    //call the function pickUpPen on the arm belonging to self
    [self.arm pickUpPen];
}

- (Pen *)putNewInkCartridgeInPen:(Pen *)pen
{
    //call a function on the current instance (that is, "self")
    [self pickUpPen];
    
    //create a new InkCartridge
    InkCartridge *cartridge = [[InkCartridge alloc] init];
    
    //return the result of pen:pen withInkCartridge:cartridge
    //(the function pen:pen withInkCartridge:cartridge returns a Pen after putting the cartridge in it, so we'll return that too)
    return [self pen:pen withInkCartridge:cartridge];
}

//this function accepts two arguments and returns a Pen
- (Pen *)pen:(Pen *)pen withInkCartridge:(InkCartridge *)inkCartridge
{
    pen.inkCartridge = inkCartridge;
    return pen;
}

//this class accepts two ints and returns an int
- (int)add:(int)firstNumber to:(int)secondNumber
{
    return firstNumber + secondNumber;
}

- (int)subtract:(int)firstNumber from:(int)secondNumber
{
    return secondNumber - firstNumber;
}

//this class returns a boolean
- (BOOL)isMyLuckyNumberSeven
{
    if (self.myLuckyNumber == 7) {
        return NO;
    }else if (self.myLuckyNumber != 7){
        return NO;
    }
    
    return NO;
}

@end

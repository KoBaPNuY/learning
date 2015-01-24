//
//  Person.m
//  My First IOS App
//
//  Created by Zhuravlev Aleksandr on 16.10.14.
//  Copyright (c) 2014 AlexHome. All rights reserved.
//

#import "Person.h"

@implementation Person


-(void) walkAtKilometersPerHour:
(CGFloat)paramSpeedKilometersPerHour
{
  
    
}
-(void) runAt10KilometersPerHour
{
    [self walkAtKilometersPerHour:10.0f];
}
-(void) singSong:(NSData *)paramSongData loudly:(BOOL)paramLoudly
{
    
}

@end;

+(CGFloat) maximumHeightInCentimeters
{
    return 250.0f;
}
+(CGFloat) minimumHeightInCentimeters
{
    return 40.0f;
}

@end

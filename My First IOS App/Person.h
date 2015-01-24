//
//  Person.h
//  My First IOS App
//
//  Created by Zhuravlev Aleksandr on 16.10.14.
//  Copyright (c) 2014 AlexHome. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;

-(void) walkAtKilometersPerHour: (CGFloat)paramSpeedKilometersPerHour;
-(void) runAt10KilometresPerHour;
@end


//@property (nonatomic, assign) CGFloat currentHeight;

//@end
@property (nonatomic,assign) CGFloat currentHeight;

+(CGFloat) maximumHeightInCentimeters;
+(CGFloat) minimumHeightInCentimeters;

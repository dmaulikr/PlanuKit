//
//  NuEngine.h
//  PlanuKit
//
//  Created by Cameron Hotchkies on 1/17/12.
//  Copyright (c) 2012 Roboboogie Studios. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>

@interface NuEngine : NSObject
{
    NSInteger cost;
    NSInteger duranium;
    NSInteger engineId;
    NSInteger molybdenum;
    NSString* name;
    NSInteger techLevel;
    NSInteger tritanium;
    NSInteger fuelFactor[9];
}

@property (nonatomic, assign) NSInteger cost;
@property (nonatomic, assign) NSInteger duranium;
@property (nonatomic, assign) NSInteger engineId;
@property (nonatomic, assign) NSInteger molybdenum;
@property (nonatomic, retain) NSString* name;
@property (nonatomic, assign) NSInteger techLevel;
@property (nonatomic, assign)NSInteger tritanium;

- (NSInteger)fuelFactorForWarp:(NSInteger)warpLevel;

- (void)loadFromDict:(NSDictionary*)input;

@end
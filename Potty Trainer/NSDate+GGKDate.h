//
//  NSDate+GGKDate.h
//  Potty Trainer
//
//  Created by Geoff Hom on 2/25/13.
//  Copyright (c) 2013 Geoff Hom. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (GGKDate)

// Return whether this date is the same day, a previous day, or a later day (in the Gregorian calendar).
- (NSComparisonResult)compareByDay:(NSDate *)theDate;

// Return whether this date is today (in the Gregorian calendar).
- (BOOL)dateIsToday;

// Return the number of minutes that this time is after the given time. Assumes the given time is on the same day and has at least hour and minute components. If this time is earlier, the result is negative.
- (NSInteger)minutesAfterTime:(NSDateComponents *)theDateComponents;

// Return a string with the month (abbreviated) and day. E.g., Feb 23.
- (NSString *)monthDayString;

@end

//
//  LunarCalendar.h
//  Clock
//  NSChineseCalendar有bug, 有些日子不准..所以需要自己写
//  Created by shunping liu on 12-7-13.
//

#import <Foundation/Foundation.h>

@interface LunarCalendar : NSObject
{
    @private
    NSInteger lcMonth;
    NSInteger lcYear;
    NSInteger lcDay;
    
    NSArray *_chineseMonths;
    NSArray *_chineseDays;
    BOOL isLeap;
}

@property (nonatomic, assign) NSInteger lcYear;
@property (nonatomic, assign) NSInteger lcMonth;
@property (nonatomic, assign) NSInteger lcDay;

@property (nonatomic, retain) NSArray *chineseMonths;
@property (nonatomic, retain) NSArray *chineseDays;


- (id)initWithDate:(NSDate*)date;
+ (LunarCalendar*)initWithDate:(NSDate*)date;
@end

NSString *getChineseCalendarWithDate(NSDate *date);
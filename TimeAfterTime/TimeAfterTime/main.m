//
//  main.m
//  TimeAfterTime
//
//  Created by 何洲 on 2019/5/23.
//  Copyright © 2019 何洲. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // 通过 alloc 和 init 消息来创建对象
//        NSDate *now = [NSDate date];
        NSDate *now = [[NSDate alloc] init];
        NSLog(@"This NSDate object lives at %p", now);
        NSLog(@"The date is %@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970", seconds);
        
        NSHost *host = [NSHost currentHost];
        NSString *name = [host localizedName];
        NSLog(@"The name of the computer is %@", name);
        
        // 传递实参
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@,", later);
        
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSLog(@"My calendar is %@", [cal calendarIdentifier]);
        
        // 传递多个实参
        unsigned long day = [cal ordinalityOfUnit:NSCalendarUnitDay
                                           inUnit:NSCalendarUnitMonth
                                          forDate:now];
        NSLog(@"This is day %lu of the month", day);
        
        // 消息嵌套发送
        double seconds2 =[[NSDate date] timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970", seconds2);
    }
    return 0;
}

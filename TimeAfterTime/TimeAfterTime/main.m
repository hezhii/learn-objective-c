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
        // insert code here...
        NSDate *now = [NSDate date];
        NSLog(@"This NSDate object lives at %p", now);
        NSLog(@"The date is %@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970", seconds);
        
        NSHost *host = [NSHost currentHost];
        NSString *name = [host localizedName];
        NSLog(@"The name of the computer is %@", name);
    }
    return 0;
}

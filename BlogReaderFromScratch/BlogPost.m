//
//  BlogPost.m
//  BlogReaderFromScratch
//
//  Created by Jeremy Petter on 2015-04-21.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

- (instancetype)initWithTitle:(NSString *)title{
    self = [super init];
    if (self){
        _title = title;
        _thumbnail = nil;
    }
    
    return self;
    
}
+ (instancetype) blogPostWithTitle:(NSString *)title{
    return [[self alloc] initWithTitle:title];
}

- (NSURL *) thumbnailURL {
    return [NSURL URLWithString:self.thumbnail];
}

- (NSString *) formattedDate {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSDate *tempDate = [dateFormatter dateFromString:self.date];
    [dateFormatter setDateFormat:@"EE, MMM dd"];
    return [dateFormatter stringFromDate:tempDate];
    
}

@end

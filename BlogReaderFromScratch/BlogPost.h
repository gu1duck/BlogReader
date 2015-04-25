//
//  BlogPost.h
//  BlogReaderFromScratch
//
//  Created by Jeremy Petter on 2015-04-21.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *author;
@property (strong, nonatomic) NSString *thumbnail;
@property (strong, nonatomic) NSString *date;
@property (strong, nonatomic) NSURL *url;

//Designated initializer
- (instancetype)initWithTitle:(NSString *)title;

//Convenience contructor
+ (instancetype) blogPostWithTitle:(NSString *)title;

- (NSURL *) thumbnailURL;
- (NSString *) formattedDate;
    

@end

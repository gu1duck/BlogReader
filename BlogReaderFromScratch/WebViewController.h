//
//  WebViewController.h
//  BlogReaderFromScratch
//
//  Created by Jeremy Petter on 2015-04-24.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *targetURL;

@property (strong, nonatomic) IBOutlet UIWebView *webView;


@end

//
//  ViewController.m
//  JSONModelExample
//
//  Created by Ankush Kushwaha on 9/22/17.
//  Copyright © 2017 Startcut. All rights reserved.
//https://github.com/jsonmodel/jsonmodel

#import "ViewController.h"
#import "User.h"
#import "Country.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    
    NSString* path = [[NSBundle mainBundle] pathForResource:@"data"
                                                     ofType:nil];
    
    NSString* content = [NSString stringWithContentsOfFile:path
                                                  encoding:NSUTF8StringEncoding
                                                     error:NULL];

    NSError* err = nil;
    User* user = [[User alloc] initWithString:content error:&err];
    
    NSLog(@"%@",user.country);
    
}

@end

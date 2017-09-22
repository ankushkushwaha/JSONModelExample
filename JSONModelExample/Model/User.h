//
//  User.h
//  JSONModelExample
//
//  Created by Ankush Kushwaha on 9/22/17.
//  Copyright © 2017 Startcut. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "Country.h"

@interface User : JSONModel
    
@property (nonatomic) NSInteger id;
@property (nonatomic) NSString *name;
@property (nonatomic) Country *country;
@property (nonatomic) BOOL active;
@property (nonatomic) NSNumber *height;
    
@end

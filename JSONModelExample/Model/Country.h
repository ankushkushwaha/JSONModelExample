//
//  Country.h
//  JSONModelExample
//
//  Created by Ankush Kushwaha on 9/22/17.
//  Copyright © 2017 Startcut. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Country : JSONModel
@property (nonatomic) NSInteger id;
@property (nonatomic) NSString *name;
@property (nonatomic) NSString *code;
    
@end

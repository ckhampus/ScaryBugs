//
//  ScaryBugData.m
//  ScaryBugs
//
//  Created by Cristian Hampus on 2012-12-13.
//  Copyright (c) 2012 Cristian Hampus. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData

@synthesize title=_title;
@synthesize rating=_rating;

-(id)initWithTitle:(NSString *)title rating:(float)rating
{
    if ((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    
    return self;
}

@end

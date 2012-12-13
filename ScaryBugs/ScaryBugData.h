//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Cristian Hampus on 2012-12-13.
//  Copyright (c) 2012 Cristian Hampus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

-(id)initWithTitle:(NSString *)title rating:(float)rating;

@end

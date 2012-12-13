//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Cristian Hampus on 2012-12-13.
//  Copyright (c) 2012 Cristian Hampus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

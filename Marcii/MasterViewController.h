//
//  MasterViewController.h
//  Marcii
//
//  Created by Paul Benoit on 2/20/14.
//  Copyright (c) 2014 Paul Benoit. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

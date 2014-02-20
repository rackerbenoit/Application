//
//  DetailViewController.h
//  Marcii
//
//  Created by Paul Benoit on 2/20/14.
//  Copyright (c) 2014 Paul Benoit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

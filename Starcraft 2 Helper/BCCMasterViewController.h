//
//  BCCMasterViewController.h
//  Starcraft 2 Helper
//
//  Created by Brent Calderoni on 11/21/13.
//  Copyright (c) 2013 Brent Calderoni. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BCCDetailViewController;

@interface BCCMasterViewController : UITableViewController

@property (strong, nonatomic) BCCDetailViewController *detailViewController;

@end

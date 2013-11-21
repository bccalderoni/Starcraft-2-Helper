//
//  BCCDetailViewController.h
//  Starcraft 2 Helper
//
//  Created by Brent Calderoni on 11/21/13.
//  Copyright (c) 2013 Brent Calderoni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BCCDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

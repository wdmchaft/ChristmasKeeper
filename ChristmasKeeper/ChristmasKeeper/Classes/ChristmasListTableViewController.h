//
//  ChristmasListTableViewController.h
//  ChristmasKeeper
//
//  Created by Chris Lowe on 10/29/11.
//  Copyright (c) 2011 USAA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddChristmasItemViewController.h"
#import "ChristmasItems.h"

@interface ChristmasListTableViewController : UITableViewController <AddChristmasItemDelegate>
@property (nonatomic, strong) ChristmasItems *christmasGifts;
@property (nonatomic, strong) NSIndexPath *selectedRow;
@end

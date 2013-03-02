//
//  MBMasterViewController.h
//  MLS
//
//  Created by Matt Brindley on 3/2/13.
//  Copyright (c) 2013 MattBrindley. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MBDetailViewController;

#import <CoreData/CoreData.h>

@interface MBMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) MBDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

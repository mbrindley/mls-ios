//
//  MBAppDelegate.h
//  MLS
//
//  Created by Matt Brindley on 3/2/13.
//  Copyright (c) 2013 MattBrindley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

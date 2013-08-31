//
//  KDAppDelegate.h
//  TaskManager
//
//  Created by Wyg Jyw on 8/31/13.
//  Copyright (c) 2013 wygjyw. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface KDAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end

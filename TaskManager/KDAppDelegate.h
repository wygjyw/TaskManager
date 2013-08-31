//
//  KDAppDelegate.h
//  TaskManager
//
//  Created by Wyg Jyw on 8/31/13.
//  Copyright (c) 2013 wygjyw. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class KDSettingsWindowController;

@interface KDAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSMenu *menu;
@property (retain) NSStatusItem *statusItem;
- (IBAction)showSettings:(id)sender;
@property (nonatomic, retain) KDSettingsWindowController *settingsWnd;

@end

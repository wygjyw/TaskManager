//
//  KDAppDelegate.m
//  TaskManager
//
//  Created by Wyg Jyw on 8/31/13.
//  Copyright (c) 2013 wygjyw. All rights reserved.
//

#import "KDAppDelegate.h"
#import "KDSettingsWindowController.h"

@implementation KDAppDelegate

@synthesize statusItem = _statusItem;
@synthesize settingsWnd = _settingsWnd;


- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
    [_window close];
}

-(void)awakeFromNib
{
    NSStatusBar *statusBar = [NSStatusBar systemStatusBar];
    self.statusItem = [statusBar statusItemWithLength:NSVariableStatusItemLength];
    [_statusItem setHighlightMode:YES];
    [_statusItem setMenu:_menu];
    [_statusItem setTitle:@""];
    [_statusItem setLength:26.0];
    [_statusItem setImage:[NSImage imageNamed:@"logo_small"]];
    
}


- (IBAction)showSettings:(id)sender
{
    if (self.settingsWnd == nil)
    {
        self.settingsWnd = [[KDSettingsWindowController alloc] initWithWindowNibName:@"KDSettingsWindowController"];
    }
    [self.settingsWnd showWindow:nil];
    [NSApp activateIgnoringOtherApps:YES];
}

@end

//
//  KDTaskItem.h
//  TaskManager
//
//  Created by Wyg Jyw on 8/31/13.
//  Copyright (c) 2013 wygjyw. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum AlertType
{
    TASK_ITEM_MESSAGE,
    TASK_ITEM_OPENFILE,
} AlertType;

@interface KDTaskItem : NSObject
{
    AlertType taskAlertType;
    
}

@property (nonatomic, copy) NSString *taskName;
@property (nonatomic, copy) NSString *messageName;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appParam;

@end

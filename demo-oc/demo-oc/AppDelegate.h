//
//  AppDelegate.h
//  demo-oc
//
//  Created by Mark Ran on 17/3/23.
//  Copyright © 2017年 markran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


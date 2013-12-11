//
//  TSAppDelegate.h
//  TS范例
//
//  Created by zhou on 13-12-11.
//  Copyright (c) 2013年 zhou. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TSUserCertCheckService;
@interface TSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

// 1
@property (nonatomic,strong) UITabBarController* tabBarCtrl;
@property (nonatomic,strong) UINavigationController* navCtrl;
@property (nonatomic,strong) NSMutableArray* tabArray;
@property (nonatomic,strong) TSUserCertCheckService* checkService;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

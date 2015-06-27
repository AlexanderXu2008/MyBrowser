//
//  FavoritesViewController.h
//  MyBrowser
//
//  Created by luowei on 15/6/27.
//  Copyright (c) 2015年 wodedata. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MyWebView;

@interface FavoritesViewController : UIViewController

@property(nonatomic, strong) UITableView *tableView;

@property(nonatomic, strong) NSMutableArray *favoriteList;

@property(nonatomic, strong) UISegmentedControl *segmentedControl;
@property(nonatomic, copy) void (^getCurrentWebViewBlock)(MyWebView **);
@property(nonatomic, copy) void (^loadRequestBlock)(NSURL *);
@end

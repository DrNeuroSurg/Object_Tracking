//
//  ViewController.h
//  OpenCV Tests
//
//  Created by Yongyang Nie on 11/16/16.
//  Copyright © 2016 Yongyang Nie. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>

@property (strong) NSMutableArray *array;

@property (weak) IBOutlet NSImageView *image;
@property (weak) IBOutlet NSTableView *tableView;

@end


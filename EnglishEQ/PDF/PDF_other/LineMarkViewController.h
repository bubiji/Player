//
//  LineMarkViewController.h
//  PDFViewer
//
//  Created by Radaee on 13-1-5.
//  Copyright (c) 2013年 Radaee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LineMarkViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property(strong,retain)UITableView *partitationTableView;
@property(strong,retain)UITableViewCell *partitationTableViewCell;
@property(strong,retain)NSDictionary *dicData;
@property(strong,retain)NSArray *arrayData;
@end

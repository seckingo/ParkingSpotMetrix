//
//  HistoryController.h
//  ParkingSpotMetrix
//
//  Created by P. Mark Anderson on 5/24/10.
//  Copyright 2010 Spot Metrix, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HistoryController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
	NSArray *history;
}

@property (nonatomic, retain) NSArray *history;

- (IBAction) clear;

@end

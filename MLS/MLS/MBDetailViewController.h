//
//  MBDetailViewController.h
//  MLS
//
//  Created by Matt Brindley on 3/2/13.
//  Copyright (c) 2013 MattBrindley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MBDetailViewController : UIViewController <UISplitViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

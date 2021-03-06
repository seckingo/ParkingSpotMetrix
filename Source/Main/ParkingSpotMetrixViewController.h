//
//  ParkingSpotMetrixViewController.h
//  ParkingSpotMetrix
//
//  Created by P. Mark Anderson on 5/7/10.
//  Copyright Spot Metrix, Inc 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SM3DAR.h"
#import "PointerView.h"
#import "ArrowFixture.h"

@interface ParkingSpotMetrixViewController : UIViewController <SM3DAR_Delegate, CLLocationManagerDelegate, PointerButtonDelegate> {
	UIView *screen1;
    UIImageView *dropTarget;
    IBOutlet UIBarButtonItem *parkButton;
	SM3DAR_PointOfInterest *parkingSpot;
    ArrowFixture *arrow;
    SM3DAR_Fixture *sphereBackground;
    SM3DAR_Fixture *groundplane;
    PointerView *pointer;
    PointerView *compass;
    PointerView *instructions;
    NSTimer *hudTimer;
    NSTimer *statusTimer;
    CGFloat lastHeading;
    SM3DAR_Controller *sm3dar;
    IBOutlet UIView *sm3darView;
    IBOutlet UIToolbar *toolbar;
    NSString *address;
    NSInteger poiCount;
    IBOutlet UILabel *statusLabel;
    IBOutlet UIView *header;
    BOOL headerHidden;
    CGRect normal3darRect;
    NSDate *locationUpdatedAt;
}

@property (nonatomic, retain) IBOutlet UIView *screen1;
@property (nonatomic, retain) IBOutlet UIImageView *dropTarget;
@property (nonatomic, retain) IBOutlet UIView *sm3darView;
@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *parkButton;
@property (nonatomic, retain) IBOutlet UILabel *statusLabel;
@property (nonatomic, retain) SM3DAR_PointOfInterest *parkingSpot;
@property (nonatomic, retain) PointerView *pointer;
@property (nonatomic, retain) PointerView *compass;
@property (nonatomic, retain) PointerView *instructions;
@property (nonatomic, retain) ArrowFixture *arrow;
@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) SM3DAR_Fixture *sphereBackground;
@property (nonatomic, retain) SM3DAR_Fixture *groundplane;
@property (nonatomic, retain) NSDate *locationUpdatedAt;

- (CGPoint) centerPoint;
- (IBAction) toggleParkingSpot;
- (IBAction) zoom;
- (void) setDropTargetHidden:(BOOL)hide;
- (void) bringActiveScreenToFront;
- (SM3DAR_Fixture*) addFixtureWithView:(SM3DAR_PointView*)pointView;
- (ArrowFixture*) addArrowFixture:(ArrowView*)arrowView;
- (SM3DAR_Fixture*) addLabelFixture:(NSString*)title subtitle:(NSString*)subtitle coord:(Coord3D)coord;
- (SM3DAR_PointOfInterest*) addPOI:(NSString*)title subtitle:(NSString*)subtitle latitude:(CLLocationDegrees)lat longitude:(CLLocationDegrees)lon  canReceiveFocus:(BOOL)canReceiveFocus;
- (void) restoreSpot;
- (void) updatePointer;
- (BOOL) compassIsEnlarged;
- (void) addBackground;
- (void) addGroundPlane;
- (void) addArrow;
- (void) moveArrow;
- (BOOL) parkingSpotIsValid;
- (void) updateStatusLabel;
- (ArrowView*) parkingSpotView;

@end


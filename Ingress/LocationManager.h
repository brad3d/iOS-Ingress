//
//  PlayerLocation.h
//  Ingress
//
//  Created by John Bekas Jr on 6/27/13.
//  Copyright (c) 2013 A&A Code. All rights reserved.
//

#import <Foundation/Foundation.h>

CLLocationDistance const SCANNER_RANGE = 40;

@interface LocationManager : NSObject <CLLocationManagerDelegate> {
    NSMutableArray *_delegates;
    CLLocationManager *_locationManager;
}

@property (nonatomic, readonly) CLLocation *playerLocation;

+ (instancetype)sharedInstance;
//+ (CLLocationManager *)locationManager;

- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;

@end
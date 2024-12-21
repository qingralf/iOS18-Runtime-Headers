/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocalOfflineSubscriptionInfo : NSObject <_GEOOfflineSubscriptionInfo> {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    GEOMapRegion * _region;
    GEOMapDataSubscriptionState * _state;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned char device;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, readonly) GEOMapRegion *region;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (unsigned char)device;
- (bool)isLoaded;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (id)region;

@end
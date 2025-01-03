/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPRouteInfo : NSObject <NSSecureCoding> {
    NSArray * _laneGuidances;
    NSArray * _maneuvers;
    CPRouteGuidance * _routeGuidance;
}

@property (nonatomic, readonly, copy) NSArray *laneGuidances;
@property (nonatomic, readonly, copy) NSArray *maneuvers;
@property (nonatomic, readonly, copy) CPRouteGuidance *routeGuidance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRouteGuidance:(id)arg1 maneuvers:(id)arg2 laneGuidances:(id)arg3;
- (id)laneGuidances;
- (id)maneuvers;
- (id)routeGuidance;

@end

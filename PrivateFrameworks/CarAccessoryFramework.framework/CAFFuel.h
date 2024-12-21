/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFFuel : CAFAccessory

@property (nonatomic, readonly) CAFFuelConsumption *fuelConsumption;
@property (nonatomic, readonly) CAFFuelConsumption *fuelConsumptionService;
@property (nonatomic, readonly) CAFFuelLevel *fuelLevel;
@property (nonatomic, readonly) CAFFuelLevel *fuelLevelService;

+ (id)accessoryIdentifier;
+ (void)load;
+ (id)observerProtocol;

- (void)addObserver:(id)arg1;
- (id)fuelConsumption;
- (id)fuelConsumptionService;
- (id)fuelLevel;
- (id)fuelLevelService;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
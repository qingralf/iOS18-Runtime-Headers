/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFAutomakerNotificationHistory : CAFAccessory

@property (nonatomic, readonly) NSArray *historicalNotificationServices;
@property (nonatomic, readonly) NSArray *historicalNotifications;

+ (id)accessoryIdentifier;
+ (void)load;
+ (id)observerProtocol;

- (void)addObserver:(id)arg1;
- (id)historicalNotificationServices;
- (id)historicalNotifications;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
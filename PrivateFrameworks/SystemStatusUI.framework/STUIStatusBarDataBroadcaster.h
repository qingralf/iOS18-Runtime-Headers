/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI
 */

@interface STUIStatusBarDataBroadcaster : NSObject {
    STStatusBarData * _broadcastData;
    NSHashTable * _dataListeners;
    STStatusBarOverridesStatusDomain * _overridesDomain;
}

@property (nonatomic, readonly) STStatusBarData *currentData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)currentData;
- (void)dealloc;
- (void)registerListener:(id)arg1;
- (void)unregisterListener:(id)arg1;
- (void)updateWithData:(id /* block */)arg1;

@end

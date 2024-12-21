/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULDisplayMonitor : ULEventMonitor {
    NSString * _appInFocus;
    FBSDisplayLayoutMonitor * _displayLayoutMinitor;
    bool  _displayOn;
    bool  _screenLocked;
}

@property (nonatomic, retain) NSString *appInFocus;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *displayLayoutMinitor;
@property (nonatomic) bool displayOn;
@property (nonatomic) bool screenLocked;

- (void).cxx_destruct;
- (id)_checkAppInFocusFromLayout:(id)arg1;
- (bool)_checkDisplayOnFromLayout:(id)arg1;
- (bool)_checkScreenLockedFromLayout:(id)arg1;
- (void)_didUpdateDisplayLayout:(id)arg1;
- (id)appInFocus;
- (id)displayLayoutMinitor;
- (bool)displayOn;
- (id)latestEventAfterAddingObserverForEventName:(id)arg1;
- (bool)screenLocked;
- (void)setAppInFocus:(id)arg1;
- (void)setDisplayLayoutMinitor:(id)arg1;
- (void)setDisplayOn:(bool)arg1;
- (void)setScreenLocked:(bool)arg1;
- (void)startMonitoring:(id)arg1;
- (void)stopMonitoring:(id)arg1;

@end
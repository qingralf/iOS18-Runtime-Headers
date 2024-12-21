/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRDisplayMonitor : NSObject {
    NSString * _appInFocus;
    NSDate * _appInFocusTimestamp;
    FBSDisplayLayoutMonitor * _continuityDisplayMonitor;
    FBSDisplayLayoutMonitor * _defaultMainDisplayMonitor;
    bool  _displayLocked;
    bool  _displayOn;
    bool  _isContinuityDisplay;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
}

@property (nonatomic, retain) NSString *appInFocus;
@property (nonatomic, retain) NSDate *appInFocusTimestamp;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *continuityDisplayMonitor;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *defaultMainDisplayMonitor;
@property (nonatomic) bool displayLocked;
@property (nonatomic) bool displayOn;
@property (nonatomic) bool isContinuityDisplay;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSHashTable *observers;

- (void).cxx_destruct;
- (void)_didUpdateContinuityDisplay:(id)arg1;
- (void)_didUpdateMainDisplayLayout:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)appInFocus;
- (id)appInFocusTimestamp;
- (id)continuityDisplayMonitor;
- (void)dealloc;
- (id)defaultMainDisplayMonitor;
- (bool)displayLocked;
- (bool)displayOn;
- (id)getAppInFocusWithTimestamp;
- (id)init;
- (bool)isContinuityDisplay;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setAppInFocus:(id)arg1;
- (void)setAppInFocusTimestamp:(id)arg1;
- (void)setContinuityDisplayMonitor:(id)arg1;
- (void)setDefaultMainDisplayMonitor:(id)arg1;
- (void)setDisplayLocked:(bool)arg1;
- (void)setDisplayOn:(bool)arg1;
- (void)setIsContinuityDisplay:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setObservers:(id)arg1;

@end
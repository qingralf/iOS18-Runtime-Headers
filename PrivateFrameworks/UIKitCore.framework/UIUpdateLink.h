/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIUpdateLink : NSObject {
    struct ActionListHead { 
        struct ActionListItem {} *slh_first; 
    }  _actions;
    bool  _active;
    bool  _enabled;
    bool  _engaged;
    struct _UIUpdateRequest { 
        unsigned int flags; 
        unsigned int minRate; 
        unsigned int preferredRate; 
        unsigned int maxRate; 
        unsigned long long phase; 
        unsigned long long load; 
    }  _request;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (nonatomic) bool requiresContinuousUpdates;
@property (nonatomic) bool wantsImmediatePresentation;
@property (nonatomic) bool wantsLowLatencyEventDispatch;

+ (id)updateLinkForView:(id)arg1;
+ (id)updateLinkForView:(id)arg1 actionHandler:(id /* block */)arg2;
+ (id)updateLinkForView:(id)arg1 actionTarget:(id)arg2 selector:(SEL)arg3;
+ (id)updateLinkForWindowScene:(id)arg1;
+ (id)updateLinkForWindowScene:(id)arg1 actionHandler:(id /* block */)arg2;
+ (id)updateLinkForWindowScene:(id)arg1 actionTarget:(id)arg2 selector:(SEL)arg3;

- (void)addActionToPhase:(id)arg1 handler:(id /* block */)arg2;
- (void)addActionToPhase:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)addActionWithHandler:(id /* block */)arg1;
- (void)addActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)currentUpdateInfo;
- (void)dealloc;
- (bool)isEnabled;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (bool)requiresContinuousUpdates;
- (void)setEnabled:(bool)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setRequiresContinuousUpdates:(bool)arg1;
- (void)setWantsImmediatePresentation:(bool)arg1;
- (void)setWantsLowLatencyEventDispatch:(bool)arg1;
- (bool)wantsImmediatePresentation;
- (bool)wantsLowLatencyEventDispatch;

@end

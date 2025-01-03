/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate> {
    CKFullScreenEffect * _currentEffect;
    NSObject<CKFullScreenEffectManagerDelegate> * _delegate;
    NSTimer * _effectDurationTimer;
    NSMutableArray * _effectQueue;
    CKScheduledUpdater * _triggerUpdater;
}

@property (nonatomic, retain) CKFullScreenEffect *currentEffect;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) NSObject<CKFullScreenEffectManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *effectDurationTimer;
@property (nonatomic, retain) NSMutableArray *effectQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKScheduledUpdater *triggerUpdater;

+ (double)delayBeforeEffectWithIdentifier:(id)arg1;
+ (double)idleDurationAfterEffectWithIdentifier:(id)arg1;
+ (id)localizedMaskStringForEffectWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (id)currentEffect;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)effectDurationTimer;
- (id)effectForIdentifier:(id)arg1;
- (id)effectIdentifiers;
- (id)effectQueue;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)fullScreenEffectDidPrepareSoundEffect:(id)arg1;
- (id)fullscreenEffectMap;
- (id)init;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)arg1;
- (id)localizedPickerTitleForEffectWithIdentifier:(id)arg1;
- (void)setCurrentEffect:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectDurationTimer:(id)arg1;
- (void)setEffectQueue:(id)arg1;
- (void)setTriggerUpdater:(id)arg1;
- (void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2;
- (void)stopFullscreenEffect;
- (void)triggerNextEffect;
- (id)triggerUpdater;

@end

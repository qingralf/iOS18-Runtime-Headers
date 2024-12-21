/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSSavedTipsManager : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _$observationRegistrar;
    void _currentTip;
    void _isCurrentTipSaved;
    void queue;
    void savedTipsMap;
}

@property (nonatomic, retain) TPSTip *currentTip;
@property (nonatomic) bool isCurrentTipSaved;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)currentTip;
- (id)identifiers;
- (id)init;
- (bool)isCurrentTipSaved;
- (bool)isSavedWithTipIdentifier:(id)arg1;
- (void)removeInvalidEntries;
- (id)savedDateWithCorrelationId:(id)arg1;
- (void)setCurrentTip:(id)arg1;
- (void)setIsCurrentTipSaved:(bool)arg1;
- (void)toggleSavedTipWithCorrelationId:(id)arg1 tipIdentifier:(id)arg2;
- (void)updateSavedTipsWithCorrelationId:(id)arg1 tipIdentifier:(id)arg2 savedDate:(id)arg3 lastUsedVersion:(id)arg4;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCoreUI.framework/LocalAuthenticationCoreUI
 */

@interface LocalAuthenticationCoreUI.LACUIRatchetViewModel : NSObject <LACDTORatchetObserver, LACUIRatchetViewModelType> {
    void $__lazy_storage_$_context;
    void $__lazy_storage_$_learnMoreSubject;
    void $__lazy_storage_$_ratchetIdentifier;
    void $__lazy_storage_$_stateSubject;
    void configuration;
    void contextProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  expirationDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  gracePeriodExpirationDate;
    void isInvalidated;
    void isRunning;
    void isStrictModeEnabled;
    void options;
    void ratchetManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void tasks;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uiContinuation;
}

@property (nonatomic) bool isInvalidated;

+ (id)mapError:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isInvalidated;
- (void)ratchetStateDidChange:(id)arg1;
- (void)setIsInvalidated:(bool)arg1;
- (void)start;
- (void)stopWithReason:(id)arg1 invalidate:(bool)arg2;

@end

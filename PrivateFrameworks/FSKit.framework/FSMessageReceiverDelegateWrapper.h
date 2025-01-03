/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSMessageReceiverDelegateWrapper : NSObject <FSTaskOperations> {
    NSError * _completedError;
    NSObject<FSTaskMessageOperations> * _delegate;
    bool  _hasCompleted;
    bool  _hasStarted;
    NSLocale * _locale;
    NSArray * _preferredLanguages;
}

@property (retain) NSError *completedError;
@property (readonly) NSObject<FSTaskMessageOperations> *delegate;
@property (readonly) bool hasCompleted;
@property (readonly) bool hasStarted;
@property (readonly) NSLocale *locale;
@property (readonly) NSArray *preferredLanguages;

- (void).cxx_destruct;
- (void)completed:(id)arg1 reply:(id /* block */)arg2;
- (void)completed:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)completedError;
- (id)delegate;
- (void)didStart;
- (void)getLocalizationSetup:(id /* block */)arg1;
- (bool)hasCompleted;
- (bool)hasStarted;
- (id)initWithDelegate:(id)arg1 Locale:(id)arg2 preferredLanguages:(id)arg3;
- (id)locale;
- (void)logMessage:(id)arg1;
- (id)preferredLanguages;
- (void)prompt:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)promptTrueFalse:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)setCompletedError:(id)arg1;

@end

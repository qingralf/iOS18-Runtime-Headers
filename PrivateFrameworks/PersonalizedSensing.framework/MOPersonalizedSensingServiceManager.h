/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizedSensing.framework/PersonalizedSensing
 */

@interface MOPersonalizedSensingServiceManager : NSObject {
    NSXPCConnection * _connection;
    bool  _isGMSAvailable;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool isGMSAvailable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)generatePromptSuggestionWithTemplate:(id)arg1 context:(id)arg2 options:(id)arg3;
+ (void)handleDbAccessRenewalTask:(id)arg1;
+ (bool)isServiceDeployed;
+ (void)primeService;

- (void).cxx_destruct;
- (void)_fetchPersonalizedSyncContextWithOptions:(id)arg1 withReply:(id /* block */)arg2;
- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (void)fetchPersonalizedContextWithOptions:(id)arg1 withReply:(id /* block */)arg2;
- (id)init;
- (bool)isGMSAvailable;
- (void)notifyContextFeedback:(id)arg1 withReply:(id /* block */)arg2;
- (id)queue;
- (void)refreshMomentsContextWithReply:(id /* block */)arg1;
- (void)requestDBAccessForPersonalizedSensingServiceWithReply:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setIsGMSAvailable:(bool)arg1;
- (void)setQueue:(id)arg1;

@end

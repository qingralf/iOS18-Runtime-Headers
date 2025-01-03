/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDSyncBubble : NSObject <UMUserSyncStakeholder> {
    FPDExtensionManager * _extensionManager;
    NSObject<OS_dispatch_group> * _startupGroup;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createSyncBubbleTasksIfNecessary;
- (id)initWithExtensionManager:(id)arg1;
- (void)retryLaterWithError:(id)arg1;
- (void)start;
- (void)startupFinished;
- (void)uploadContent;
- (void)willSwitchUser;

@end

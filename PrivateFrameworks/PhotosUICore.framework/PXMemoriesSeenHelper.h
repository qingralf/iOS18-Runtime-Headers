/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesSeenHelper : NSObject {
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultHelper;

- (void).cxx_destruct;
- (void)_clearPendingNotificationForMemory:(id)arg1;
- (void)clearAnyPendingNotificationsFromMemories:(id)arg1;
- (void)clearAnyPendingStateFromMemories:(id)arg1;
- (id)init;
- (id)workQueue;

@end

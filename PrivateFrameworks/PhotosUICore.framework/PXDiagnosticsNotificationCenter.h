/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDiagnosticsNotificationCenter : NSObject {
    long long  _nextReplyID;
    NSMutableDictionary * _pendingReplyHandles;
}

- (void).cxx_destruct;
- (void)_didReplyToIDNumber:(long long)arg1;
- (id)init;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 resultHandler:(id /* block */)arg3;

@end
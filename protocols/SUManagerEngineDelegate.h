/* Generated by RuntimeBrowser.
 */

@protocol SUManagerEngineDelegate <NSObject>

@required

- (void)sendUnlockNotifications:(bool)arg1;

@optional

- (void)activated:(bool)arg1;
- (void)downloadCompleted:(NSError *)arg1;
- (void)downloadCompleted:(NSError *)arg1 informClients:(bool)arg2;
- (void)downloadProgress:(SUOperationProgress *)arg1;
- (void)installCompleted:(NSError *)arg1;
- (void)removeCompleted:(NSError *)arg1;
- (void)rollbackCompleted:(SUCoreRollbackDescriptor *)arg1 withError:(NSError *)arg2;
- (void)rollbackStarted:(SUCoreRollbackDescriptor *)arg1;

@end
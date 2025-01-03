/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyControlsObjC.framework/FamilyControlsObjC
 */

@interface FOAuthorizationCenter : NSObject {
    NSObject * _connectionLock;
    NSXPCConnection * _currentConnection;
}

@property (readonly) NSArray *authorizationRecords;
@property (nonatomic, readonly) NSObject *connectionLock;
@property (nonatomic, retain) NSXPCConnection *currentConnection;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (id)authorizationRecords;
- (id)authorizationsPlist;
- (void)clearCurrentConnectionAndInvalidate:(bool)arg1;
- (id)connectionLock;
- (id)currentConnection;
- (void)dealloc;
- (id)init;
- (void)requestAuthorizationForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestInternalAuthorizationForMember:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)resetAuthorizationForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)revokeAuthorizationForDeletionForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)revokeAuthorizationForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)revokeInternalAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (void)setCurrentConnection:(id)arg1;
- (id)xpcConnection;

@end

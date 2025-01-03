/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMultiUserConnection : NSObject {
    NSXPCConnection * _connection;
    AFInstanceContext * _instanceContext;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connection;
- (id)_multiUserServiceWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)downloadVoiceProfileForiCloudAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(id /* block */)arg2;
- (void)getConformingSharedUserIds:(id /* block */)arg1;
- (void)getFirstNameForSharedUserId:(id)arg1 completion:(id /* block */)arg2;
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(id /* block */)arg2;
- (void)getHomeUserIdOfRecognizedUserWithCompletion:(id /* block */)arg1;
- (void)getMultiUserAudioAppSignalsForSharedUserID:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)getMultiUserSettingsForRecognizedUserWithCompletion:(id /* block */)arg1;
- (void)getMultiUserSettingsForSharedUserID:(id)arg1 completion:(id /* block */)arg2;
- (void)getPreferredMediaUserHomeUserIDWithCompletion:(id /* block */)arg1;
- (void)getRecognizableUsersConfromingSharedUserIds:(id /* block */)arg1;
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(id /* block */)arg2;
- (void)getSharedUserIdForiCloudAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)getSharedUserInfoForSharedUserID:(id)arg1 completion:(id /* block */)arg2;
- (void)getSharedUserInfoForiCloudAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)getSharedUserProfileLimitWithCompletion:(id /* block */)arg1;
- (void)getUserAgentStringForSharedUserID:(id)arg1 completion:(id /* block */)arg2;
- (void)getiCloudAltDSIDOfRecognizedUserWithCompletion:(id /* block */)arg1;
- (void)homeUserIdToNames:(id /* block */)arg1;
- (id)init;
- (id)initWithConnectionFactory:(id)arg1;
- (void)triggerVoiceProfileUploadWithCompletion:(id /* block */)arg1;

@end

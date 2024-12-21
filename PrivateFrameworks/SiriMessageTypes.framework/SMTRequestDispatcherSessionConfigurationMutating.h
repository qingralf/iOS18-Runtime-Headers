/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriMessageTypes.framework/SiriMessageTypes
 */

@interface SMTRequestDispatcherSessionConfigurationMutating : NSObject {
    NSString * _assistantId;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    NSString * _languageCode;
    NSString * _sharedUserId;
    bool  _understandingOnDevice;
}

@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic) struct { unsigned int x1[8]; } clientAuditToken;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *sharedUserId;
@property (nonatomic) bool understandingOnDevice;

- (void).cxx_destruct;
- (id)assistantId;
- (struct { unsigned int x1[8]; })clientAuditToken;
- (id)languageCode;
- (void)setAssistantId:(id)arg1;
- (void)setClientAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setSharedUserId:(id)arg1;
- (void)setUnderstandingOnDevice:(bool)arg1;
- (id)sharedUserId;
- (bool)understandingOnDevice;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriMessageTypes.framework/SiriMessageTypes
 */

@interface SMTRequestDispatcherSessionConfiguration : NSObject {
    NSString * _assistantId;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    NSString * _languageCode;
    NSString * _sharedUserId;
    bool  _understandingOnDevice;
}

@property (nonatomic, readonly, copy) NSString *assistantId;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } clientAuditToken;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly, copy) NSString *sharedUserId;
@property (nonatomic, readonly) bool understandingOnDevice;

- (void).cxx_destruct;
- (id)assistantId;
- (struct { unsigned int x1[8]; })clientAuditToken;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)languageCode;
- (id)sharedUserId;
- (bool)understandingOnDevice;

@end
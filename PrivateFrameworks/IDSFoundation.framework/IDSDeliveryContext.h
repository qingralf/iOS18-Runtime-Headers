/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSDeliveryContext : NSObject {
    NSNumber * _currentAverageRTT;
    NSError * _deliveryError;
    NSString * _deviceID;
    NSArray * _displayURIs;
    NSNumber * _endpointState;
    NSNumber * _failureReason;
    long long  _idsResponseCode;
    NSNumber * _isDeviceBlackedOut;
    bool  _lastCall;
    bool  _lastCourierAck;
    NSNumber * _localMessageState;
    long long  _responseCode;
    NSNumber * _responseCommand;
    NSError * _responseError;
    NSNumber * _responseTimeStamp;
    IDSPushToken * _responseToken;
    NSNumber * _wpConnectionErrorCode;
    NSString * _wpConnectionErrorDomain;
    NSDictionary * _wpConnectionErrorUserInfo;
}

@property (nonatomic, copy) NSNumber *currentAverageRTT;
@property (nonatomic, copy) NSError *deliveryError;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, copy) NSArray *displayURIs;
@property (nonatomic, copy) NSNumber *endpointState;
@property (nonatomic, copy) NSNumber *failureReason;
@property (nonatomic) long long idsResponseCode;
@property (nonatomic, copy) NSNumber *isDeviceBlackedOut;
@property (nonatomic) bool lastCall;
@property (nonatomic) bool lastCourierAck;
@property (nonatomic, copy) NSNumber *localMessageState;
@property (nonatomic) long long responseCode;
@property (nonatomic, copy) NSNumber *responseCommand;
@property (nonatomic, copy) NSError *responseError;
@property (nonatomic, copy) NSNumber *responseTimeStamp;
@property (nonatomic, copy) IDSPushToken *responseToken;
@property (nonatomic, copy) NSNumber *wpConnectionErrorCode;
@property (nonatomic, copy) NSString *wpConnectionErrorDomain;
@property (nonatomic, copy) NSDictionary *wpConnectionErrorUserInfo;

+ (long long)_endpointStateForServerDeliveryStatus:(id)arg1;

- (void).cxx_destruct;
- (id)currentAverageRTT;
- (id)deliveryError;
- (id)deviceID;
- (id)displayURIs;
- (id)endpointState;
- (id)failureReason;
- (long long)idsResponseCode;
- (id)initWithError:(id)arg1;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2 currentAverageRTT:(id)arg3 isDeviceBlackedOut:(id)arg4 localMessageState:(id)arg5;
- (id)initWithResponseCode:(long long)arg1 error:(id)arg2 lastCall:(bool)arg3;
- (id)initWithServerResponseDictionary:(id)arg1;
- (id)isDeviceBlackedOut;
- (bool)lastCall;
- (bool)lastCourierAck;
- (id)localMessageState;
- (long long)responseCode;
- (id)responseCommand;
- (id)responseError;
- (id)responseTimeStamp;
- (id)responseToken;
- (void)setCurrentAverageRTT:(id)arg1;
- (void)setDeliveryError:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDisplayURIs:(id)arg1;
- (void)setEndpointState:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setIdsResponseCode:(long long)arg1;
- (void)setIsDeviceBlackedOut:(id)arg1;
- (void)setLastCall:(bool)arg1;
- (void)setLastCourierAck:(bool)arg1;
- (void)setLocalMessageState:(id)arg1;
- (void)setResponseCode:(long long)arg1;
- (void)setResponseCommand:(id)arg1;
- (void)setResponseError:(id)arg1;
- (void)setResponseTimeStamp:(id)arg1;
- (void)setResponseToken:(id)arg1;
- (void)setWpConnectionErrorCode:(id)arg1;
- (void)setWpConnectionErrorDomain:(id)arg1;
- (void)setWpConnectionErrorUserInfo:(id)arg1;
- (id)wpConnectionErrorCode;
- (id)wpConnectionErrorDomain;
- (id)wpConnectionErrorUserInfo;

@end

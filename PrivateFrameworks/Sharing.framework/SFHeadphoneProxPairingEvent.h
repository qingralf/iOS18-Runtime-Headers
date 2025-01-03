/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFHeadphoneProxPairingEvent : NSObject <SFCoreAnalyticsEvent> {
    double  _assetFetchDuration;
    bool  _attemptedPairing;
    unsigned char  _color;
    long long  _errorCode;
    double  _foundToFirstCardDuration;
    double  _pairingDuration;
    long long  _pairingType;
    unsigned int  _productID;
    NSString * _productIDString;
    double  _triggerToFirstCardDuration;
}

@property (nonatomic) double assetFetchDuration;
@property (nonatomic) bool attemptedPairing;
@property (nonatomic) unsigned char color;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (nonatomic) double foundToFirstCardDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pairingDuration;
@property (nonatomic) long long pairingType;
@property (nonatomic) unsigned int productID;
@property (nonatomic) NSString *productIDString;
@property (readonly) Class superclass;
@property (nonatomic) double triggerToFirstCardDuration;

+ (id)eventName;

- (double)assetFetchDuration;
- (bool)attemptedPairing;
- (unsigned char)color;
- (long long)errorCode;
- (id)eventPayload;
- (double)foundToFirstCardDuration;
- (double)pairingDuration;
- (long long)pairingType;
- (unsigned int)productID;
- (id)productIDString;
- (void)setAssetFetchDuration:(double)arg1;
- (void)setAttemptedPairing:(bool)arg1;
- (void)setColor:(unsigned char)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setFoundToFirstCardDuration:(double)arg1;
- (void)setPairingDuration:(double)arg1;
- (void)setPairingType:(long long)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setProductIDString:(id)arg1;
- (void)setTriggerToFirstCardDuration:(double)arg1;
- (void)submitEvent;
- (double)triggerToFirstCardDuration;

@end

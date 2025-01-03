/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePrescriptionLite.framework/CorePrescriptionLite
 */

@interface CRXFAppClipCodeScanningState : NSObject <NSCopying> {
    bool  _allowUnsupportedRX;
    CRXFAppClipCode * _dualAppClipCode;
    NSData * _dualAppClipCodePayload;
    CRXFAppClipCode * _leftAppClipCode;
    NSData * _leftAppClipCodePayload;
    NSObject<OS_os_log> * _log;
    CRXFAppClipCode * _rightAppClipCode;
    NSData * _rightAppClipCodePayload;
    CRXFAppClipCodeTranscoder * _transcoder;
}

@property (nonatomic) bool allowUnsupportedRX;
@property (nonatomic, readonly) CRXFAppClipCode *dualAppClipCode;
@property (nonatomic, readonly) NSData *dualAppClipCodePayload;
@property (nonatomic, readonly) CRXFAppClipCode *leftAppClipCode;
@property (nonatomic, readonly) NSData *leftAppClipCodePayload;
@property (nonatomic, readonly) unsigned long long lensType;
@property (nonatomic, readonly) CRXFAppClipCode *rightAppClipCode;
@property (nonatomic, readonly) NSData *rightAppClipCodePayload;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (bool)allowUnsupportedRX;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dualAppClipCode;
- (id)dualAppClipCodePayload;
- (id)init;
- (id)initWithLeftAppClipCode:(id)arg1 leftAppClipCodePayload:(id)arg2 rightAppClipCode:(id)arg3 rightAppClipCodePayload:(id)arg4 dualAppClipCode:(id)arg5 dualAppClipCodePayload:(id)arg6 allowUnsupportedRX:(bool)arg7;
- (bool)isValid;
- (id)leftAppClipCode;
- (id)leftAppClipCodePayload;
- (unsigned long long)lensType;
- (void)reset;
- (id)rightAppClipCode;
- (id)rightAppClipCodePayload;
- (void)setAllowUnsupportedRX:(bool)arg1;
- (bool)updateWithScannedAppClipCodePayload:(id)arg1 error:(id*)arg2;

@end

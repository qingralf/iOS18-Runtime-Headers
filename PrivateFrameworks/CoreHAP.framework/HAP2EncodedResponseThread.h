/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2EncodedResponseThread : HAP2LoggingObject <HAP2EncodedResponse> {
    HAPBTLEResponse * _btleResponse;
}

@property (nonatomic, readonly) HAPBTLEResponse *btleResponse;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)btleResponse;
- (id)initWithBTLEResponse:(id)arg1;
- (bool)isEncrypted;

@end

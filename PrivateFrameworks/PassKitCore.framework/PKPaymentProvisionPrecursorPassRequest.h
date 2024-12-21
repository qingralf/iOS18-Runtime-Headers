/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisionPrecursorPassRequest : PKPaymentWebServiceRequest {
    NSArray * _actions;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithPassTypeIdentifier:(id)arg1 passSerialNumber:(id)arg2 actions:(id)arg3;

@end
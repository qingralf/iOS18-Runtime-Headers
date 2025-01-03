/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKStatefulTransferCredential : PKPaymentCredential {
    NSString * _accountAttestationAnonymizationSalt;
    PKSharingChannelHandle * _handle;
    PKSharingMessage * _invitation;
    NSString * _originalShareURL;
    PKPassShare * _share;
}

@property (nonatomic, retain) NSString *accountAttestationAnonymizationSalt;
@property (nonatomic, readonly) PKSharingChannelHandle *handle;
@property (nonatomic, readonly) PKSharingMessage *invitation;
@property (nonatomic, retain) NSString *originalShareURL;
@property (nonatomic, readonly) PKPassShare *share;

- (void).cxx_destruct;
- (id)accountAttestationAnonymizationSalt;
- (id)handle;
- (id)initWithSharingChannelHandle:(id)arg1 invitation:(id)arg2 share:(id)arg3;
- (id)invitation;
- (id)originalShareURL;
- (void)setAccountAttestationAnonymizationSalt:(id)arg1;
- (void)setOriginalShareURL:(id)arg1;
- (id)share;

@end

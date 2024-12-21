/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFItemProviderLinkPresentationRequestMetadata : WFItemProviderRequestMetadata {
    LPLinkMetadata * _linkPresentationMetadata;
}

@property (nonatomic, readonly) LPLinkMetadata *linkPresentationMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchLinkMetadataWithCompletion:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkPresentationMetadata:(id)arg1;
- (id)linkPresentationMetadata;
- (id)registeredTypeIdentifiers;

@end
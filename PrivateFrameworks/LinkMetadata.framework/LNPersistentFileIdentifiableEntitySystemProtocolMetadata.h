/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNPersistentFileIdentifiableEntitySystemProtocolMetadata : NSObject <LNSystemProtocolMetadata, NSCopying, NSSecureCoding> {
    NSArray * _supportedContentTypes;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedContentTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedContentTypes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)supportedContentTypes;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTIDStaticKeyStoreEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * contactExternalURI;
    NSString * contactIdentifier;
    NSMutableDictionary * handles;
    KTAccountPublicID * publicKeyID;
}

@property (copy) NSString *contactExternalURI;
@property (copy) NSString *contactIdentifier;
@property (copy) NSString *contactServerPath;
@property (retain) NSMutableDictionary *handles;
@property (copy) NSArray *mappings;
@property (copy) KTAccountPublicID *publicKeyID;
@property (readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactExternalURI;
- (id)contactIdentifier;
- (id)contactServerPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handles;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mappings;
- (id)publicKeyID;
- (void)setContactExternalURI:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setContactServerPath:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setMappings:(id)arg1;
- (void)setPublicKeyID:(id)arg1;
- (bool)valid;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXQueryResult : NSObject <NSSecureCoding> {
    void availablility;
    void identities;
}

@property (nonatomic, readonly) _EXExtensionAvailablility *availablility;
@property (nonatomic, readonly) NSSet *identities;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availablility;
- (void)encodeWithCoder:(id)arg1;
- (id)identities;
- (id)init;
- (id)initWithAvailablility:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentities:(id)arg1;

@end

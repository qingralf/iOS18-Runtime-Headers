/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNFoundationValueType : LNValueType {
    long long  _typeIdentifier;
}

@property (nonatomic, readonly) long long typeIdentifier;
@property (nonatomic, readonly, copy) NSString *typeIdentifierAsString;

+ (id)objectClassesForCoding;
+ (id)recurrenceRuleType;
+ (id)supportedClassesByTypeIdentifier;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIdentifier:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (long long)typeIdentifier;
- (id)typeIdentifierAsString;

@end

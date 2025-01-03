/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountBeneficiary : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _allocation;
    CNContact * _contact;
    NSString * _identifier;
    unsigned long long  _relationshipType;
}

@property (nonatomic, copy) NSDecimalNumber *allocation;
@property (nonatomic, copy) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long relationshipType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allocation;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayableRelationshipString;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)relationshipType;
- (void)setAllocation:(id)arg1;
- (void)setContact:(id)arg1;

@end

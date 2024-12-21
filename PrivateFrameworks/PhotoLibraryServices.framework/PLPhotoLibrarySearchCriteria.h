/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibrarySearchCriteria : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerIdentifier;
    long long  _domain;
    NSDictionary * _internalTestOptions;
    NSString * _uuid;
}

@property (copy) NSString *containerIdentifier;
@property long long domain;
@property (copy) NSDictionary *internalTestOptions;
@property (copy) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)internalTestOptions;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDomain:(long long)arg1;
- (void)setInternalTestOptions:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
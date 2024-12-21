/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppProtection.framework/AppProtection
 */

@interface APPerAppManagedProtectability : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _map;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerAppProtectability:(id)arg1;
- (id)managedBundleIdentifiers;
- (id)protectabilityForBundleIdentifier:(id)arg1;

@end
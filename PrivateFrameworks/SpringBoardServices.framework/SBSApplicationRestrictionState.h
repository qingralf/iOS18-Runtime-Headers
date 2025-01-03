/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationRestrictionState : NSObject <NSSecureCoding> {
    NSSet * _allowedBundleIdentifiers;
    NSSet * _restrictedBundleIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *allowedBundleIdentifiers;
@property (nonatomic, readonly, copy) NSSet *restrictedBundleIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedBundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAllowedIdentifiers:(id)arg1 restrictedIdentifiers:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)restrictedBundleIdentifiers;

@end

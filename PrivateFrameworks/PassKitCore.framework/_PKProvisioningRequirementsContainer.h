/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface _PKProvisioningRequirementsContainer : NSObject <NSSecureCoding> {
    void provisioningSID;
    void requirements;
}

@property (nonatomic, copy) NSString *provisioningSID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerMinus:(id)arg1;
- (bool)containsNotManagedAccount;
- (id)displayableError;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)provisioningSID;
- (void)setProvisioningSID:(id)arg1;

@end

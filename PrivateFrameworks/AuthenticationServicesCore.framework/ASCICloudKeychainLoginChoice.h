/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore
 */

@interface ASCICloudKeychainLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSharedCredential; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loginChoiceKind;

@end

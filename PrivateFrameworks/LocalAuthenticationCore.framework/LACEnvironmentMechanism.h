/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACEnvironmentMechanism : NSObject <NSSecureCoding> {
    NSError * _availabilityError;
    NSString * _iconSystemName;
    NSString * _localizedName;
}

@property (nonatomic, readonly) NSError *availabilityError;
@property (nonatomic, readonly) NSString *iconSystemName;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)environmentMechanismForUser:(unsigned int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 dependencies:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availabilityError;
- (id)description;
- (id)descriptionDetails;
- (void)encodeWithCoder:(id)arg1;
- (id)iconSystemName;
- (id)initWithAvailabilityError:(id)arg1 localizedName:(id)arg2 iconSystemName:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;

@end
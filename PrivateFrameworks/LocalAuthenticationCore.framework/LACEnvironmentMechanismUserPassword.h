/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACEnvironmentMechanismUserPassword : LACEnvironmentMechanism {
    bool  _set;
}

@property (nonatomic, readonly) bool set;

+ (id)environmentMechanismForUser:(unsigned int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 dependencies:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (id)descriptionDetails;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAvailabilityError:(id)arg1 set:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)set;

@end

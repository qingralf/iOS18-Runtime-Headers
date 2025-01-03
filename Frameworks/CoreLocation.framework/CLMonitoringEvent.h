/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLMonitoringEvent : NSObject <NSSecureCoding> {
    bool  _authorizationRequestInProgress;
    NSDate * _date;
    unsigned long long  _diagnosticMask;
    NSString * _identifier;
    CLCondition * _refinement;
    unsigned long long  _state;
}

@property (nonatomic, readonly) bool accuracyLimited;
@property (nonatomic, readonly) bool authorizationDenied;
@property (nonatomic, readonly) bool authorizationDeniedGlobally;
@property (nonatomic, readonly) bool authorizationRequestInProgress;
@property (nonatomic, readonly) bool authorizationRestricted;
@property (nonatomic, readonly) bool conditionLimitExceeded;
@property (nonatomic, readonly) bool conditionUnsupported;
@property (readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long diagnosticMask;
@property (readonly) NSString *identifier;
@property (nonatomic, readonly) bool insufficientlyInUse;
@property (nonatomic, readonly) bool persistenceUnavailable;
@property (readonly) CLCondition *refinement;
@property (nonatomic, readonly) bool serviceSessionRequired;
@property (nonatomic, readonly) unsigned long long state;

+ (bool)supportsSecureCoding;

- (bool)accuracyLimited;
- (bool)authorizationDenied;
- (bool)authorizationDeniedGlobally;
- (bool)authorizationRequestInProgress;
- (bool)authorizationRestricted;
- (bool)conditionLimitExceeded;
- (bool)conditionUnsupported;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (unsigned long long)diagnosticMask;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 refinement:(id)arg2 state:(unsigned long long)arg3 date:(id)arg4 diagnostics:(unsigned long long)arg5;
- (bool)insufficientlyInUse;
- (bool)persistenceUnavailable;
- (id)refinement;
- (bool)serviceSessionRequired;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)updateDiagnosticMask:(unsigned long long)arg1;
- (void)updateMonitoringState:(unsigned long long)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLCondition : NSObject <NSCopying, NSSecureCoding> {
    CLClientManagerAuthorizationContext * _authorizationContext;
    CLClientKeyPath * _ckp;
    NSString * _identifier;
    bool  _isMonitoring;
    unsigned long long  _lastMonitoringState;
    id /* block */  _onConditionUpdateCallbackHandler;
    CLCondition * _refinement;
    <CLIntersiloUniverse> * _universe;
}

@property (nonatomic, retain) CLClientManagerAuthorizationContext *authorizationContext;
@property (nonatomic, retain) CLClientKeyPath *ckp;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isMonitoring;
@property (nonatomic) unsigned long long lastMonitoringState;
@property (readonly) NSString *monitoredIdentifier;
@property (nonatomic, copy) id /* block */ onConditionUpdateCallbackHandler;
@property (nonatomic, retain) CLCondition *refinement;
@property (nonatomic) <CLIntersiloUniverse> *universe;

+ (bool)supportsSecureCoding;

- (id)authorizationContext;
- (id)ckp;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initCondition;
- (id)initWithCoder:(id)arg1;
- (bool)isAuthorized;
- (bool)isMonitoring;
- (unsigned long long)lastMonitoringState;
- (id)monitoredIdentifier;
- (id /* block */)onConditionUpdateCallbackHandler;
- (id)refinement;
- (void)setAuthorizationContext:(id)arg1;
- (void)setCallbackHandler:(id /* block */)arg1;
- (void)setCkp:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsMonitoring:(bool)arg1;
- (void)setLastMonitoringState:(unsigned long long)arg1;
- (void)setOnConditionUpdateCallbackHandler:(id /* block */)arg1;
- (void)setRefinement:(id)arg1;
- (void)setUniverse:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)universe;

@end

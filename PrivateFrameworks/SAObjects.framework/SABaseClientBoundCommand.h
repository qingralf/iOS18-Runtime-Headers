/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *metricsContext;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *usefulnessScore;

+ (id)baseClientBoundCommand;
+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)callbacks;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)metricsContext;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAppId:(id)arg1;
- (void)setCallbacks:(id)arg1;
- (void)setMetricsContext:(id)arg1;
- (void)setUsefulnessScore:(id)arg1;
- (id)usefulnessScore;

@end

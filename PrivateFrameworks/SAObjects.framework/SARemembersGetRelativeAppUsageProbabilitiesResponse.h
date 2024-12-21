/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARemembersGetRelativeAppUsageProbabilitiesResponse : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSDictionary *bundleIDPercentages;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getRelativeAppUsageProbabilitiesResponse;
+ (id)getRelativeAppUsageProbabilitiesResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)bundleIDPercentages;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setBundleIDPercentages:(id)arg1;

@end
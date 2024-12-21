/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACreateSessionInfoRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *deviceAuthVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSData *sessionInfoRequest;
@property (readonly) Class superclass;

+ (id)createSessionInfoRequest;
+ (id)createSessionInfoRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)deviceAuthVersion;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)sessionInfoRequest;
- (void)setDeviceAuthVersion:(id)arg1;
- (void)setSessionInfoRequest:(id)arg1;

@end
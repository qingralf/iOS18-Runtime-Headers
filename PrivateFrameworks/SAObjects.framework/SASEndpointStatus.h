/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASEndpointStatus : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) bool confirmed;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endpointConfirmationTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)endpointStatus;
+ (id)endpointStatusWithDictionary:(id)arg1 context:(id)arg2;

- (bool)confirmed;
- (id)encodedClassName;
- (id)endpointConfirmationTimestamp;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setConfirmed:(bool)arg1;
- (void)setEndpointConfirmationTimestamp:(id)arg1;

@end

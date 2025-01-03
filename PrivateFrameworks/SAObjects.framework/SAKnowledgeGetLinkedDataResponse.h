/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAKnowledgeGetLinkedDataResponse : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *result;
@property (readonly) Class superclass;

+ (id)getLinkedDataResponse;
+ (id)getLinkedDataResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)result;
- (void)setResult:(id)arg1;

@end

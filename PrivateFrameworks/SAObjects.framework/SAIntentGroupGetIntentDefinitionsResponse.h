/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupGetIntentDefinitionsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentDefinitionInfos;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getIntentDefinitionsResponse;
+ (id)getIntentDefinitionsResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentDefinitionInfos;
- (bool)requiresResponse;
- (void)setIntentDefinitionInfos:(id)arg1;

@end
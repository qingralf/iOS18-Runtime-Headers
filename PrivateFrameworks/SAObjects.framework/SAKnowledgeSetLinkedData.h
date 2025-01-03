/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAKnowledgeSetLinkedData : SABaseClientBoundCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *linkedData;
@property (readonly) Class superclass;

+ (id)setLinkedData;
+ (id)setLinkedDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkedData;
- (bool)requiresResponse;
- (void)setLinkedData:(id)arg1;

@end

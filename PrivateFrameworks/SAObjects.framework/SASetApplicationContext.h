/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetApplicationContext : SABaseCommand <SAClientStateServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *orderedContext;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setApplicationContext;
+ (id)setApplicationContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)orderedContext;
- (bool)requiresResponse;
- (void)setOrderedContext:(id)arg1;

@end

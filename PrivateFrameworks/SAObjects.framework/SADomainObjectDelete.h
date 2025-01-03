/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SADomainObject *identifier;
@property (readonly) Class superclass;

+ (id)domainObjectDelete;
+ (id)domainObjectDeleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setIdentifier:(id)arg1;

@end

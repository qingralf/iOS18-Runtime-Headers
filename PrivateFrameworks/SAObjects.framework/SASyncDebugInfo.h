/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncDebugInfo : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *objectIds;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASyncAnchor *syncAnchor;

+ (id)debugInfo;
+ (id)debugInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)objectIds;
- (void)setObjectIds:(id)arg1;
- (void)setSyncAnchor:(id)arg1;
- (id)syncAnchor;

@end

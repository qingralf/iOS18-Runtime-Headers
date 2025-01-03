/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADuration : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic, copy) NSNumber *value;

+ (id)duration;
+ (id)durationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUnit:(id)arg1;
- (void)setValue:(id)arg1;
- (id)unit;
- (id)value;

@end

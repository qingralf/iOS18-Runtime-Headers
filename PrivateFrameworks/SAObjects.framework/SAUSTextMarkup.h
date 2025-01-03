/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUSTextMarkup : AceObject <SAAceSerializable, SAUSMarkup>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool emphasized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)textMarkup;
+ (id)textMarkupWithDictionary:(id)arg1 context:(id)arg2;

- (bool)emphasized;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setEmphasized:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

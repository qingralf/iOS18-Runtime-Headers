/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSString *alignment;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) SAUIDecoratedText *decoratedTitle;
@property (nonatomic, copy) NSArray *decoratedValues;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *values;

+ (id)propertyListItem;
+ (id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)alignment;
- (id)decoratedTitle;
- (id)decoratedValues;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setAlignment:(id)arg1;
- (void)setDecoratedTitle:(id)arg1;
- (void)setDecoratedValues:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValues:(id)arg1;
- (id)title;
- (id)values;

@end

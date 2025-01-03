/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTableRowItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSArray *columnValues;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;

+ (id)tableRowItem;
+ (id)tableRowItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)columnValues;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setColumnValues:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

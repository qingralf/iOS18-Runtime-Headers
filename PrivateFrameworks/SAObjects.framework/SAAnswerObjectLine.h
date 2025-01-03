/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *image;
@property (nonatomic, copy) NSNumber *imageInverted;
@property (nonatomic, retain) SAUIImageResource *imageResource;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)objectLine;
+ (id)objectLineWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)imageInverted;
- (id)imageResource;
- (void)setImage:(id)arg1;
- (void)setImageInverted:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

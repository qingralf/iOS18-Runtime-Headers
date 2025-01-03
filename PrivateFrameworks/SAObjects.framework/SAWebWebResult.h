/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebWebResult : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;

+ (id)webResult;
+ (id)webResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDescriptionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end

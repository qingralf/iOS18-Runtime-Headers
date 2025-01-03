/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>

@property (nonatomic, retain) <SAClientBoundCommand> *command;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) SAUIDecoratedText *decoratedValue;
@property (nonatomic, retain) SAUIDecoratedText *decoratedValueAnnotation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;
@property (nonatomic, copy) NSNumber *selected;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *valueAnnotation;

+ (id)answerProperty;
+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;

- (id)command;
- (id)decoratedValue;
- (id)decoratedValueAnnotation;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (id)punchOut;
- (id)selected;
- (void)setCommand:(id)arg1;
- (void)setDecoratedValue:(id)arg1;
- (void)setDecoratedValueAnnotation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setSelected:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueAnnotation:(id)arg1;
- (id)value;
- (id)valueAnnotation;

@end

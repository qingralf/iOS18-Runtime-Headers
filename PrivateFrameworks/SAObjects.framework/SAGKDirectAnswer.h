/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *answer;
@property (nonatomic, copy) NSString *confidenceLevel;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAGKSpeakableAnswer *speakableAnswer;
@property (readonly) Class superclass;

+ (id)directAnswer;
+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)answer;
- (id)confidenceLevel;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAnswer:(id)arg1;
- (void)setConfidenceLevel:(id)arg1;
- (void)setSpeakableAnswer:(id)arg1;
- (id)speakableAnswer;

@end

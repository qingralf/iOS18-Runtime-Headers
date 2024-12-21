/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARDAceDelegatedUserDialogAct : AceObject <SAAceSerializable>

@property (nonatomic) long long asrHypothesisIndex;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *externalParserId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SARDAceRewriteMessage *rewriteMessage;
@property (nonatomic, copy) NSString *rewrittenUtterance;
@property (readonly) Class superclass;

- (long long)asrHypothesisIndex;
- (id)encodedClassName;
- (id)externalParserId;
- (id)groupIdentifier;
- (id)rewriteMessage;
- (id)rewrittenUtterance;
- (void)setAsrHypothesisIndex:(long long)arg1;
- (void)setExternalParserId:(id)arg1;
- (void)setRewriteMessage:(id)arg1;
- (void)setRewrittenUtterance:(id)arg1;

@end
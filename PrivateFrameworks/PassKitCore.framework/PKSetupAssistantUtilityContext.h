/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSetupAssistantUtilityContext : NSObject <PKPaymentSetupAssistantContextProtocol> {
    bool  _allowsCachedCardRequirements;
    unsigned long long  _setupAssistant;
    NSData * externalizedContext;
    bool  isFollowupAction;
}

@property (nonatomic, readonly) bool allowsCachedCardRequirements;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFollowupAction;
@property (nonatomic, readonly) unsigned long long setupAssistant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsCachedCardRequirements;
- (id)externalizedContext;
- (id)initWithSetupAssistant:(unsigned long long)arg1;
- (bool)isFollowupAction;
- (void)setExternalizedContext:(id)arg1;
- (unsigned long long)setupAssistant;

@end
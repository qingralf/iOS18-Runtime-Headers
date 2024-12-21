/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AACustodianMessageInviteContext : AAMessagesInviteContext {
    NSURL * _messageURL;
    bool  _upsell;
}

@property (nonatomic, copy) NSURL *messageURL;
@property (nonatomic, readonly) bool upsell;

- (void).cxx_destruct;
- (id)_messageURLForCustodianID:(id)arg1;
- (id)_urlForCustodianID:(id)arg1;
- (id)initWithLocalContact:(id)arg1 custodianID:(id)arg2;
- (id)initWithLocalContact:(id)arg1 custodianID:(id)arg2 upsell:(bool)arg3;
- (id)messageURL;
- (void)setMessageURL:(id)arg1;
- (bool)upsell;

@end
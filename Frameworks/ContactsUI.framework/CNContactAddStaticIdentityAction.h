/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactAddStaticIdentityAction : CNContactAction {
    NSString * _chosenIdentity;
}

@property (nonatomic, retain) NSString *chosenIdentity;

+ (bool)stringIsValidIdentity:(id)arg1;
+ (id)supportedPasteboardTypes;

- (void).cxx_destruct;
- (id)chosenIdentity;
- (void)performActionWithSender:(id)arg1;
- (void)setChosenIdentity:(id)arg1;

@end

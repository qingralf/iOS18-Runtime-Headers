/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactDeleteContactAction : CNContactAction {
    CNUIExternalComponentsFactory * _componentsFactory;
    CNUICoreRecentsManager * _recentsManager;
}

@property (nonatomic, readonly) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic, readonly) CNUICoreRecentsManager *recentsManager;

- (void).cxx_destruct;
- (id)_makeAvatarImageForTraitCollection:(id)arg1;
- (id)componentsFactory;
- (bool)deleteContact;
- (id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3;
- (void)performActionWithSender:(id)arg1;
- (id)recentsManager;
- (void)showDeleteFailureAlert;

@end

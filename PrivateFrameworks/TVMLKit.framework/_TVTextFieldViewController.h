/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate> {
    IKTextFieldElement * _viewElement;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) UITextField *textField;
@property (nonatomic, readonly, retain) IKTextFieldElement *viewElement;

- (void).cxx_destruct;
- (void)_updateKeyboardWithUserText;
- (void)_updateUserText;
- (void)_updateViewLayout;
- (void)dealloc;
- (void)loadView;
- (void)searchBarDidChangeText:(id)arg1;
- (void)textDidChangeForKeyboard:(id)arg1;
- (id)textField;
- (void)updateWithViewElement:(id)arg1;
- (id)viewElement;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AUUIAlert : NSObject <UIAlertViewDelegate> {
    id  alert;
    UIAlertAction * alternateAction;
    long long  alternateButtonIndex;
    NSString * alternateButtonTitle;
    UIAlertAction * cancelAction;
    long long  cancelButtonIndex;
    NSString * cancelButtonTitle;
    id  context;
    <AUUIAlertDelegate> * delegate;
    UIAlertAction * destructiveAction;
    long long  destructiveButtonIndex;
    NSString * destructiveButtonTitle;
    NSString * message;
    UIAlertAction * okAction;
    long long  okButtonIndex;
    NSString * okButtonTitle;
    bool  prepared;
    bool  stackButtons;
    long long  tag;
    NSString * title;
    id  viewController;
}

@property (nonatomic, retain) id alert;
@property (nonatomic, retain) UIAlertAction *alternateAction;
@property (nonatomic, retain) NSString *alternateButtonTitle;
@property (nonatomic, retain) UIAlertAction *cancelAction;
@property (nonatomic, retain) NSString *cancelButtonTitle;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AUUIAlertDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIAlertAction *destructiveAction;
@property (nonatomic, retain) NSString *destructiveButtonTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UIAlertAction *okAction;
@property (nonatomic, retain) NSString *okButtonTitle;
@property (nonatomic) bool stackButtons;
@property (readonly) Class superclass;
@property (nonatomic) long long tag;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) id viewController;

- (id)alert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (id)alternateAction;
- (id)alternateButtonTitle;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (id)cancelAction;
- (id)cancelButtonTitle;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)destructiveAction;
- (id)destructiveButtonTitle;
- (void)dismissWithCancelActionAnimated:(bool)arg1;
- (void)dismissWithNoActionAnimated:(bool)arg1;
- (void)dismissWithOKActionAnimated:(bool)arg1;
- (void)enableAlternateAction:(bool)arg1;
- (void)enableCancelAction:(bool)arg1;
- (void)enableDestructiveAction:(bool)arg1;
- (void)enableOKAction:(bool)arg1;
- (id)initWithViewController:(id)arg1;
- (id)initWithViewController:(id)arg1 actionSheet:(bool)arg2;
- (id)message;
- (id)okAction;
- (id)okButtonTitle;
- (void)prepareToShow;
- (void)setAlert:(id)arg1;
- (void)setAlternateAction:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setCancelAction:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructiveAction:(id)arg1;
- (void)setDestructiveButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOkAction:(id)arg1;
- (void)setOkButtonTitle:(id)arg1;
- (void)setStackButtons:(bool)arg1;
- (void)setTag:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)show;
- (bool)stackButtons;
- (long long)tag;
- (id)title;
- (id)viewController;

@end

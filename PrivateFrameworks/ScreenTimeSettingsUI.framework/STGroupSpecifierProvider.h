/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
 */

@interface STGroupSpecifierProvider : NSObject <UITableViewDelegate> {
    UIViewController<STGroupSpecifierProviderDelegate> * _delegate;
    PSSpecifier * _groupSpecifier;
    bool  _invalid;
    bool  _isHidden;
    NSMutableArray * _privateSpecifiers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) UIViewController<STGroupSpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property bool invalid;
@property (nonatomic) bool isHidden;
@property (readonly) NSMutableArray *mutableSpecifiers;
@property (retain) NSMutableArray *privateSpecifiers;
@property (nonatomic, readonly, copy) NSArray *specifiers;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversOfIsHidden;

- (void).cxx_destruct;
- (void)_tableCellHeightDidChange:(id)arg1;
- (void)beginUpdates;
- (void)dealloc;
- (id)delegate;
- (void)dismissViewControllerAnimated:(bool)arg1;
- (void)endUpdates;
- (id)groupSpecifier;
- (id)init;
- (void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2;
- (bool)invalid;
- (void)invalidate;
- (bool)isHidden;
- (void)lazyLoadBundle:(id)arg1;
- (id)mutableSpecifiers;
- (void)popToViewControllerAnimated:(bool)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)privateSpecifiers;
- (void)reloadSectionHeaderFootersWithAnimation:(long long)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(bool)arg2;
- (void)removeSpecifiersAtIndexes:(id)arg1;
- (void)replaceObjectInSpecifiersAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceSpecifiersAtIndexes:(id)arg1 withSpecifiers:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setPrivateSpecifiers:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showController:(id)arg1 animated:(bool)arg2;
- (void)showPINSheet:(id)arg1 completion:(id /* block */)arg2;
- (void)showStoreDemoAlert;
- (id)specifiers;
- (id)specifiersAtIndexes:(id)arg1;

@end

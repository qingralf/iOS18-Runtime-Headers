/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIButtonItemStackView : TLKStackView <SearchUIButtonItemGeneratorViewDelegate> {
    SearchUIButtonItemFactory * _buttonItemFactory;
    <SearchUIButtonItemStackViewDelegate> * _buttonItemStackViewDelegate;
    NSMutableDictionary * _buttonItemViewControllersForClassNames;
    NSArray * _buttonItems;
    bool  _countMoreButtonTowardsMaxCount;
    NSMutableArray * _currentButtonItemViewControllers;
    bool  _hasLeftMainThread;
    bool  _isCompact;
    bool  _isDoneUpdating;
    UIColor * _overridenButtonColor;
    bool  _shouldReverseButtonOrder;
}

@property (nonatomic, retain) SearchUIButtonItemFactory *buttonItemFactory;
@property (nonatomic) <SearchUIButtonItemStackViewDelegate> *buttonItemStackViewDelegate;
@property (nonatomic, retain) NSMutableDictionary *buttonItemViewControllersForClassNames;
@property (nonatomic, retain) NSArray *buttonItems;
@property bool countMoreButtonTowardsMaxCount;
@property (nonatomic, retain) NSMutableArray *currentButtonItemViewControllers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLeftMainThread;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCompact;
@property (nonatomic) bool isDoneUpdating;
@property (nonatomic, retain) UIColor *overridenButtonColor;
@property (nonatomic) bool shouldReverseButtonOrder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buttonItemFactory;
- (id)buttonItemStackViewDelegate;
- (id)buttonItemViewControllersForClassNames;
- (id)buttonItems;
- (id)buttonTypes;
- (bool)countMoreButtonTowardsMaxCount;
- (id)currentButtonItemViewControllers;
- (bool)deviceIsAuthenticated;
- (void)enumerateCachedViewControllersUsingBlock:(id /* block */)arg1;
- (bool)hasLeftMainThread;
- (id)init;
- (bool)isCompact;
- (bool)isDoneUpdating;
- (id)overridenButtonColor;
- (void)setButtonItemFactory:(id)arg1;
- (void)setButtonItemStackViewDelegate:(id)arg1;
- (void)setButtonItemViewControllersForClassNames:(id)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setCountMoreButtonTowardsMaxCount:(bool)arg1;
- (void)setCurrentButtonItemViewControllers:(id)arg1;
- (void)setHasLeftMainThread:(bool)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setIsDoneUpdating:(bool)arg1;
- (void)setOverridenButtonColor:(id)arg1;
- (void)setShouldReverseButtonOrder:(bool)arg1;
- (bool)shouldReverseButtonOrder;
- (void)updateWithButtonItems:(id)arg1 maxButtonItems:(unsigned long long)arg2 buttonItemViewType:(unsigned long long)arg3 rowModel:(id)arg4 feedbackDelegate:(id)arg5;
- (id)viewForButtonItem:(id)arg1;

@end
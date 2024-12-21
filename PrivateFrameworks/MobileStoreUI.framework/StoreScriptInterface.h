/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface StoreScriptInterface : SUScriptInterface {
    SUProductPageViewController * _parentProductPageViewController;
}

@property (nonatomic) SUProductPageViewController *parentProductPageViewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)makeStoreSheetRequest;
- (id)parentProductPageViewController;
- (void)setParentProductPageViewController:(id)arg1;
- (void)showStoreSheetWithRequest:(id)arg1 animated:(bool)arg2;

@end
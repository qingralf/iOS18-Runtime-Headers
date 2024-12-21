/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface TabViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    long long  _barItem;
    BrowserController * _browserController;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long permittedArrowDirections; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } popoverSourceRect; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView *popoverSourceView; /* unknown property attribute: ? */
@property (nonatomic) long long provenance; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool shouldDismissIfSourceRemovedAfterRepositioning; /* unknown property attribute: ? */
@property (nonatomic) bool shouldHideArrow; /* unknown property attribute: ? */
@property (nonatomic) bool shouldPassthroughSuperview; /* unknown property attribute: ? */
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_tabOverviewBarButton;
- (id)description;
- (id)initWithBrowserController:(id)arg1 barItem:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (id)popoverSourceView;

@end
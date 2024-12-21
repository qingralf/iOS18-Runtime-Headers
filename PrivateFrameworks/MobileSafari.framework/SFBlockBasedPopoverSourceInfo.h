/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFBlockBasedPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    id /* block */  _sourceInfoProvider;
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
- (id)barButtonItem;
- (id)initWithSourceInfoProvider:(id /* block */)arg1;
- (unsigned long long)permittedArrowDirections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (id)popoverSourceView;
- (long long)provenance;
- (bool)shouldHideArrow;
- (bool)shouldPassthroughSuperview;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsChildViewControllerCell : CKDetailsCell <CKDetailsCell> {
    UIView * _childViewControllerView;
    bool  _shouldUseLayoutMargins;
}

@property (nonatomic, retain) UIView *childViewControllerView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldUseLayoutMargins;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)childViewControllerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setChildViewControllerView:(id)arg1;
- (void)setShouldUseLayoutMargins:(bool)arg1;
- (bool)shouldUseLayoutMargins;

@end

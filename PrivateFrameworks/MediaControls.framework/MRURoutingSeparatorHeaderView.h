/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRURoutingSeparatorHeaderView : UITableViewHeaderFooterView <MRUVisualStylingProviderObserver> {
    UIView * _separatorView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (id)stylingProvider;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
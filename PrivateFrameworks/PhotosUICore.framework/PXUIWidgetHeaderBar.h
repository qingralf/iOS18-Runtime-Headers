/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIWidgetHeaderBar : PXUIWidgetBar <PXUIWidgetHeaderViewDelegate>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createView;
- (void)setCaption:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateView;
- (double)viewHeight;
- (void)widgetHeaderView:(id)arg1 didSelectCaption:(id)arg2;
- (void)widgetHeaderView:(id)arg1 didSelectSubtitle:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosLensToolbarController : PXSecondaryToolbarController <PXChangeObserver, PXPhotosLensControlDelegate, PXSecondaryToolbarStyleGuideProvider> {
    PXPhotosLensControl * _photosLensControl;
    PXPhotosViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPhotosLensControl *photosLensControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (void)_updateLensControl;
- (id)initWithViewModel:(id)arg1 containerView:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photosLensControl;
- (void)photosLensControl:(id)arg1 didSelectItem:(id)arg2;
- (void)photosLensControl:(id)arg1 didTapOnAlreadySelectedItem:(id)arg2;
- (double)secondaryToolbarControllerMaximumAccessoryViewPaddingToContentView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerScrollableContentPadding:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarContentInsets:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })secondaryToolbarControllerToolbarPadding:(id)arg1;
- (long long)secondaryToolbarControllerToolbarPlacement:(id)arg1;
- (bool)secondaryToolbarControllerToolbarRenderedExternally:(id)arg1;
- (struct CGSize { double x1; double x2; })secondaryToolbarControllerToolbarSize:(id)arg1;
- (bool)secondaryToolbarControllerWantsToolbarVisible:(id)arg1;
- (void)setPhotosLensControl:(id)arg1;
- (id)viewModel;

@end
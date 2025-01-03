/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosFilterToggleButtonController : PXContentFilterToggleButtonController <PXChangeObserver> {
    PXPhotosGridActionPerformer * _actionPerformer;
    UIColor * _backgroundColor;
    UIColor * _foregroundColor;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, retain) PXPhotosGridActionPerformer *actionPerformer;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (void)_updateContentFilterState;
- (id)actionPerformer;
- (id)allMenuItems;
- (id)backgroundColor;
- (id)filterInlineMenuItems;
- (id)filterMenuItems;
- (id)filterMenuSubtitle;
- (id)foregroundColor;
- (id)initWithButtonConfiguration:(id)arg1 roundedButton:(bool)arg2;
- (id)initWithViewModel:(id)arg1 buttonConfiguration:(id)arg2;
- (id)initWithViewModel:(id)arg1 buttonConfiguration:(id)arg2 actionPerformer:(id)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setActionPerformer:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)viewModel;
- (id)viewOptionsMenuItems;
- (id)viewOptionsMenuSubtitle;

@end

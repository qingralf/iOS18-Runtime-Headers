/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver> {
    <PXCMMFooterViewModelDelegate> * _delegate;
    long long  _mode;
    PXMomentShareStatusPresentation * _momentShareStatusPresentation;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PXCMMFooterViewModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeStopSharingActionForInvitation:(id)arg1 session:(id)arg2;
- (void)_updateAllProperties;
- (id)delegate;
- (id)init;
- (id)initWithMomentShareStatusPresentation:(id)arg1 mode:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDelegate:(id)arg1;

@end

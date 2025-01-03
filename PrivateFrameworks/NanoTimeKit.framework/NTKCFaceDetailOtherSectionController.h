/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKCFaceDetailOtherSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate> {
    <NTKCFaceDetailOtherSectionDelegate> * _delegate;
    NTKCFaceDetailMonogramComplicationCell * _monogramCell;
    NTKCFaceDetailMonogramEditCell * _monogramEditCell;
    NTKCFaceDetailShowSecondsCell * _showSecondsCell;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <NTKCFaceDetailOtherSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKCFaceDetailMonogramComplicationCell *monogramCell;
@property (nonatomic, retain) NTKCFaceDetailMonogramEditCell *monogramEditCell;
@property (nonatomic, retain) NTKCFaceDetailShowSecondsCell *showSecondsCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMonogramEditRow;
- (bool)_canSelectRow:(long long)arg1;
- (void)_commonInit;
- (void)_removeMonogramEditRow;
- (void)addMonogramRowForSlot:(id)arg1;
- (void)addShowSecondsRow:(id)arg1;
- (id)delegate;
- (void)didSelectRow:(long long)arg1;
- (void)faceDidChange;
- (id)monogramCell;
- (id)monogramEditCell;
- (void)removeMonogramRow;
- (void)removeShowSecondsRow;
- (void)setDelegate:(id)arg1;
- (void)setMonogramCell:(id)arg1;
- (void)setMonogramEditCell:(id)arg1;
- (void)setShowSecondsCell:(id)arg1;
- (id)showSecondsCell;
- (id)titleForHeader;
- (void)toggleCell:(id)arg1 didToggle:(bool)arg2;

@end

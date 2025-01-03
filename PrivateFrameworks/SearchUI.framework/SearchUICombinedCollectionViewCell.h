/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICombinedCollectionViewCell : SearchUICollectionViewCell <VRXInteractionDelegate> {
    SearchUICombinedCardSectionsView * _cardSectionView;
}

@property (retain) SearchUICombinedCardSectionsView *cardSectionView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSectionView;
- (void)createStyledButtons:(id)arg1 buttonFont:(id)arg2 isCompact:(bool)arg3 :(id /* block */)arg4;
- (void)emitInstrumentationEvent:(id)arg1;
- (void)performSFCommand:(id)arg1;
- (id)presentingViewController;
- (void)reportSFFeedback:(id)arg1;
- (void)setCardSectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sizingView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end

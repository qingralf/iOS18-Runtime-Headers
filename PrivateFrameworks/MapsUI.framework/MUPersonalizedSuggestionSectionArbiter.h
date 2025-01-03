/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUPersonalizedSuggestionSectionArbiter : NSObject <MUPersonalizedSuggestionSectionArbiterDelegate> {
    MUHikingTipSectionController * _hikingTipSectionController;
    MUPassiveCallToActionSectionController * _placeCallToActionSectionController;
    _TtC6MapsUI29MUPlaceNotesSectionController * _placeNotesSectionController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MUHikingTipSectionController *hikingTipSectionController;
@property (nonatomic) MUPassiveCallToActionSectionController *placeCallToActionSectionController;
@property (nonatomic) _TtC6MapsUI29MUPlaceNotesSectionController *placeNotesSectionController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)bestSuggestionSectionType;
- (id)hikingTipSectionController;
- (id)placeCallToActionSectionController;
- (id)placeNotesSectionController;
- (void)setHikingTipSectionController:(id)arg1;
- (void)setPlaceCallToActionSectionController:(id)arg1;
- (void)setPlaceNotesSectionController:(id)arg1;
- (bool)shouldShowHikingTipSection;
- (bool)shouldShowPlaceCallToActionSection;
- (bool)shouldShowPlaceNotesSection;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUPlaceInfoSectionControllerConfiguration : NSObject {
    <MKPlaceActionManagerProtocol> * _actionDelegate;
    MUPlaceDataAvailability * _availability;
    bool  _developerPlaceCard;
    MUPlaceHoursSectionViewConfiguration * _hoursConfiguration;
    GEOPlaceDetailsModuleConfiguration * _moduleConfiguration;
}

@property (nonatomic) <MKPlaceActionManagerProtocol> *actionDelegate;
@property (nonatomic, retain) MUPlaceDataAvailability *availability;
@property (getter=isDeveloperPlaceCard, nonatomic) bool developerPlaceCard;
@property (nonatomic, retain) MUPlaceHoursSectionViewConfiguration *hoursConfiguration;
@property (nonatomic, retain) GEOPlaceDetailsModuleConfiguration *moduleConfiguration;

- (void).cxx_destruct;
- (id)actionDelegate;
- (id)availability;
- (id)hoursConfiguration;
- (bool)isDeveloperPlaceCard;
- (id)moduleConfiguration;
- (void)setActionDelegate:(id)arg1;
- (void)setAvailability:(id)arg1;
- (void)setDeveloperPlaceCard:(bool)arg1;
- (void)setHoursConfiguration:(id)arg1;
- (void)setModuleConfiguration:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUWebBasedPlacecardContext : NSObject <MUWebBundleContext> {
    bool  _canShowDownloadOffline;
    bool  _canShowOpenFindMyAction;
    bool  _canShowRequestLocation;
    CNContact * _contact;
    NSMutableArray * _formattedAddressLines;
    NSArray * _guides;
    NSString * _locale;
    NSString * _locationAddress;
    NSString * _mapItemString;
    unsigned long long  _numberOfReportsInReview;
    NSString * _options;
    bool  _placeInShortcuts;
    bool  _showMoreButton;
    UITraitCollection * _traitCollection;
    bool  _userCanEdit;
    NSString * _userIcon;
}

@property (nonatomic, readonly) NSDictionary *context;

- (void).cxx_destruct;
- (id)_environment;
- (id)_formattedPhoneNumber;
- (id)_osVersion;
- (id)_userArpPhotos;
- (id)_userArpRating;
- (id)_userArpSuggestions;
- (id)_userData;
- (id)_userGuides;
- (id)_userInterfaceIdiom;
- (id)_userLocation;
- (id)_userNotes;
- (id)_userRapsInReview;
- (id)context;
- (id)initWithMapItemString:(id)arg1 formattedAddressLines:(id)arg2 locationAddress:(id)arg3 traitCollection:(id)arg4 guides:(id)arg5 placeInShortcuts:(bool)arg6 numberOfReportsInReview:(unsigned long long)arg7 userIcon:(id)arg8 options:(id)arg9 contact:(id)arg10 userCanEdit:(bool)arg11 canShowOpenFindMyAction:(bool)arg12 canShowRequestLocation:(bool)arg13 showMoreButton:(bool)arg14 canShowDownloadOffline:(bool)arg15;

@end

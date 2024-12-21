/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISettingsManager : NSObject <MCProfileConnectionObserver> {
    NSNumber * _isRTL;
    NSNumber * _maxMovieRank;
    NSNumber * _maxTVShowRank;
    WLKSystemPreferencesStore * _preferencesStore;
    NSString * _preferredVideoFormat;
    bool  _upNextLockupsUseCoverArt;
}

@property (getter=isAppInstallationAllowed, nonatomic, readonly) bool appInstallationAllowed;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *isRTL;
@property (nonatomic, copy) NSNumber *maxMovieRank;
@property (nonatomic, copy) NSNumber *maxTVShowRank;
@property (nonatomic, retain) WLKSystemPreferencesStore *preferencesStore;
@property (nonatomic, copy) NSString *preferredVideoFormat;
@property (nonatomic, readonly) NSString *restrictions;
@property (readonly) Class superclass;
@property (nonatomic) bool upNextLockupsUseCoverArt;

+ (unsigned long long)_wlkTypeFromVUIPostPlayType:(unsigned long long)arg1;
+ (bool)isPostPlayAutoPlayEnabledForType:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
- (void)_handlePreferencesChange:(id)arg1;
- (bool)_hasPreferredVideoFormatChanged;
- (bool)_hasRTLChanged;
- (bool)_hasRestrictionsChanged;
- (bool)_hasUpNextLockupsUseCoverArtChanged;
- (id)_init;
- (id)_isRTL;
- (unsigned long long)_preferredVideoFormat;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS:(id /* block */)arg1;
- (void)_setupNotificationObservers;
- (void)_teardownNotificationObservers;
- (bool)_upNextLockupsUseCoverArt;
- (void)checkAndUpdateSettings;
- (void)createSettingsStore;
- (void)dealloc;
- (id)init;
- (bool)isAppInstallationAllowed;
- (id)isRTL;
- (id)maxMovieRank;
- (id)maxTVShowRank;
- (id)preferencesJSONData;
- (id)preferencesStore;
- (id)preferredVideoFormat;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)restrictions;
- (void)setIsRTL:(id)arg1;
- (void)setMaxMovieRank:(id)arg1;
- (void)setMaxTVShowRank:(id)arg1;
- (void)setPreferencesStore:(id)arg1;
- (void)setPreferredVideoFormat:(id)arg1;
- (void)setUpNextLockupsUseCoverArt:(bool)arg1;
- (bool)upNextLockupsUseCoverArt;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIContactsEnvironment : NSObject {
    <CNUIUserActionDiscoveringEnvironment> * _actionDiscoveringEnvironment;
    <CNLSApplicationWorkspace> * _applicationWorkspace;
    CNAuthorizationContext * _authorizationContext;
    <CNUILikenessRendering> * _cachingLikenessRenderer;
    <CNUIPRLikenessResolver> * _cachingLikenessResolver;
    <CNUILikenessRendering> * _cachingMonogramRenderer;
    <CNCapabilities> * _capabilities;
    CNContactsEnvironment * _cnEnvironment;
    CNCollation * _collation;
    CNUIExternalComponentsFactory * _componentsFactory;
    CNContactChangesNotifier * _contactChangesNotifier;
    CNContactStore * _contactStore;
    CNUISchedulerProvider * _defaultSchedulerProvider;
    <CNUIDefaultUserActionFetcher> * _defaultUserActionFetcher;
    CNGeminiManager * _geminiManager;
    CNHealthStoreManager * _healthStoreManager;
    CNUIIDSAvailabilityProvider * _idsAvailabilityProvider;
    CNUIUserActivityManager * _inProcessActivityManager;
    CNContactStore * _inProcessContactStore;
    CNFavorites * _inProcessFavorites;
    <CNUIApplicationLaunchCheckin> * _launchCheckinRegistrar;
    CNAvatarPosterCarouselFingerprintCache * _likenessCarouselFingerprintCache;
    CNUIMeContactMonitor * _meMonitor;
    NSString * _personaId;
    <CNUIPlaceholderProviderFactory> * _placeholderProviderFactory;
    CNUICoreRecentsManager * _recentsManager;
    struct UCollator { } * _sortCollator;
}

@property (nonatomic, retain) <CNUIUserActionDiscoveringEnvironment> *actionDiscoveringEnvironment;
@property (nonatomic, retain) <CNLSApplicationWorkspace> *applicationWorkspace;
@property (nonatomic, retain) CNAuthorizationContext *authorizationContext;
@property (nonatomic, retain) <CNUILikenessRendering> *cachingLikenessRenderer;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *cachingLikenessResolver;
@property (nonatomic, retain) <CNUILikenessRendering> *cachingMonogramRenderer;
@property (nonatomic, retain) <CNCapabilities> *capabilities;
@property (nonatomic, readonly) CNContactsEnvironment *cnEnvironment;
@property (nonatomic, retain) CNCollation *collation;
@property (nonatomic, retain) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic, retain) CNContactChangesNotifier *contactChangesNotifier;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNUISchedulerProvider *defaultSchedulerProvider;
@property (nonatomic, retain) <CNUIDefaultUserActionFetcher> *defaultUserActionFetcher;
@property (nonatomic, retain) CNGeminiManager *geminiManager;
@property (nonatomic, retain) CNHealthStoreManager *healthStoreManager;
@property (nonatomic, retain) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (nonatomic, retain) CNUIUserActivityManager *inProcessActivityManager;
@property (nonatomic, retain) CNContactStore *inProcessContactStore;
@property (nonatomic, retain) CNFavorites *inProcessFavorites;
@property (nonatomic, retain) <CNUIApplicationLaunchCheckin> *launchCheckinRegistrar;
@property (nonatomic, retain) CNAvatarPosterCarouselFingerprintCache *likenessCarouselFingerprintCache;
@property (nonatomic, retain) CNUIMeContactMonitor *meMonitor;
@property (nonatomic, retain) NSString *personaId;
@property (nonatomic, retain) <CNUIPlaceholderProviderFactory> *placeholderProviderFactory;
@property (nonatomic, retain) CNUICoreRecentsManager *recentsManager;
@property (nonatomic, readonly) bool runningInContactsAppOniPad;
@property (nonatomic) struct UCollator { }*sortCollator;

+ (id)currentEnvironment;
+ (id)makeCurrentEnvironment;

- (void).cxx_destruct;
- (id)actionDiscoveringEnvironment;
- (id)applicationWorkspace;
- (id)authorizationContext;
- (id)cachingLikenessRenderer;
- (id)cachingLikenessResolver;
- (id)cachingMonogramRenderer;
- (id)capabilities;
- (id)cnEnvironment;
- (id)collation;
- (id)componentsFactory;
- (id)contactChangesNotifier;
- (id)contactStore;
- (void)dealloc;
- (id)defaultSchedulerProvider;
- (id)defaultUserActionFetcher;
- (id)geminiManager;
- (id)healthStoreManager;
- (id)idsAvailabilityProvider;
- (id)inProcessActivityManager;
- (id)inProcessContactStore;
- (id)inProcessFavorites;
- (id)init;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)launchCheckinRegistrar;
- (id)likenessCarouselFingerprintCache;
- (id)meMonitor;
- (id)nts_lazyActionDiscoveringEnvironment;
- (id)nts_lazyApplicationWorkspace;
- (id)nts_lazyCachingLikenessRenderer;
- (id)nts_lazyCachingLikenessResolver;
- (id)nts_lazyCachingMonogramRenderer;
- (id)nts_lazyCapabilities;
- (id)nts_lazyCollation;
- (id)nts_lazyComponentsFactory;
- (id)nts_lazyContactChangesNotifier;
- (id)nts_lazyContactStore;
- (id)nts_lazyDefaultSchedulerProvider;
- (id)nts_lazyDefaultUserActionFetcher;
- (id)nts_lazyGeminiManager;
- (id)nts_lazyHealthStoreManager;
- (id)nts_lazyIDSAvailabilityProvider;
- (id)nts_lazyInProcessActivityManager;
- (id)nts_lazyInProcessContactStore;
- (id)nts_lazyInProcessFavorites;
- (id)nts_lazyLikenessCarouselFingerprintCache;
- (id)nts_lazyPlaceholderProviderFactory;
- (id)nts_lazyRecentsManager;
- (struct UCollator { }*)nts_lazySortCollator;
- (id)nts_makeActionDiscoveringEnvironment;
- (id)nts_makeCachingLikenessResolver;
- (id)nts_makeContactChangesNotifier;
- (id)nts_makeRecentsManager;
- (id)personaId;
- (id)placeholderProviderFactory;
- (id)recentsManager;
- (bool)runningInContactsAppOniPad;
- (void)setActionDiscoveringEnvironment:(id)arg1;
- (void)setApplicationWorkspace:(id)arg1;
- (void)setAuthorizationContext:(id)arg1;
- (void)setCachingLikenessRenderer:(id)arg1;
- (void)setCachingLikenessResolver:(id)arg1;
- (void)setCachingMonogramRenderer:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setCollation:(id)arg1;
- (void)setComponentsFactory:(id)arg1;
- (void)setContactChangesNotifier:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDefaultSchedulerProvider:(id)arg1;
- (void)setDefaultUserActionFetcher:(id)arg1;
- (void)setGeminiManager:(id)arg1;
- (void)setHealthStoreManager:(id)arg1;
- (void)setIdsAvailabilityProvider:(id)arg1;
- (void)setInProcessActivityManager:(id)arg1;
- (void)setInProcessContactStore:(id)arg1;
- (void)setInProcessFavorites:(id)arg1;
- (void)setLaunchCheckinRegistrar:(id)arg1;
- (void)setLikenessCarouselFingerprintCache:(id)arg1;
- (void)setMeMonitor:(id)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setPlaceholderProviderFactory:(id)arg1;
- (void)setRecentsManager:(id)arg1;
- (void)setSortCollator:(struct UCollator { }*)arg1;
- (struct UCollator { }*)sortCollator;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIClusterThemeManager : NSObject <BSInvalidatable, CRSUIClusterThemeServerToClientInterface, CRSUIWallpaperDataProviding> {
    NSSecurityScopedURLWrapper * _assetBaseURL;
    unsigned long long  _assetVersion;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <CRSUIWallpaperDataProvidingDelegate> * _dataProviderDelegate;
    <CRSUIClusterThemeManagerDelegate> * _delegate;
    NSArray * _displays;
    NSSecurityScopedURLWrapper * _extraAssetsURL;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_connectionActivated;
    bool  _lock_invalidated;
    NSDictionary * _themeData;
}

@property (nonatomic, retain) NSSecurityScopedURLWrapper *assetBaseURL;
@property (nonatomic) unsigned long long assetVersion;
@property (nonatomic, retain) BSServiceConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic) <CRSUIWallpaperDataProvidingDelegate> *dataProviderDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CRSUIClusterThemeManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displays;
@property (nonatomic, retain) NSSecurityScopedURLWrapper *extraAssetsURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *themeData;

- (void).cxx_destruct;
- (void)_getURLForAssetWithIdentifier:(id)arg1 displayID:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleConnectionActivated;
- (void)_processThemeLayoutData:(id)arg1 error:(id)arg2;
- (void)_setThemeData:(id)arg1 completion:(id /* block */)arg2;
- (id)assetBaseURL;
- (unsigned long long)assetVersion;
- (id)connection;
- (id)connectionQueue;
- (id)dataProviderDelegate;
- (id)defaultWallpapers;
- (id)delegate;
- (id)displayID;
- (id)displays;
- (id)dynamicAppearanceWallpapersForVehicle:(id)arg1;
- (id)extraAssetsURL;
- (void)getURLForAssetWithIdentifier:(id)arg1 displayID:(id)arg2 completion:(id /* block */)arg3;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (bool)isReady;
- (id)loadWallpaperFromData:(id)arg1;
- (id)resolveWallpaper:(id)arg1;
- (void)setAssetBaseURL:(id)arg1;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setDataProviderDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplays:(id)arg1;
- (void)setExtraAssetsURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setThemeData:(id)arg1;
- (void)setThemeData:(id)arg1 completion:(id /* block */)arg2;
- (id)themeData;
- (oneway void)updateExtraAssetsURL:(id)arg1;
- (unsigned long long)version;
- (id)wallpapers;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIWallpaperPreferences : NSObject {
    <CRSUIWallpaperDataProviding> * _dataProvider;
    <CRSUIWallpaper> * _stagedWallpaper;
    CRVehicle * _vehicle;
    CRPairedVehicleManager * _vehicleManager;
}

@property (nonatomic, retain) <CRSUIWallpaper> *currentWallpaper;
@property (nonatomic, retain) <CRSUIWallpaperDataProviding> *dataProvider;
@property (nonatomic, retain) <CRSUIWallpaper> *stagedWallpaper;
@property (nonatomic, retain) CRVehicle *vehicle;
@property (nonatomic, retain) CRPairedVehicleManager *vehicleManager;

- (void).cxx_destruct;
- (bool)_hasGaugeClusterScreen;
- (id)currentWallpaper;
- (id)dataProvider;
- (id)initWithDataProvider:(id)arg1;
- (void)setCurrentWallpaper:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setStagedWallpaper:(id)arg1;
- (void)setVehicle:(id)arg1;
- (void)setVehicleManager:(id)arg1;
- (id)stagedWallpaper;
- (void)updateHasGaugeClusterScreen:(bool)arg1;
- (void)updateThemeData:(id)arg1;
- (bool)updateWallpaperToSupportDynamicAppearance;
- (id)vehicle;
- (id)vehicleManager;
- (id)wallpaperForLayoutIdentifier:(id)arg1;
- (id)wallpaperFromThemeData:(id)arg1;

@end
